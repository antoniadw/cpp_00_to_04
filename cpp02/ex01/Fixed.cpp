/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:08 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/03 18:11:40 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fracBits = 8;

Fixed::Fixed(void): _fixedValue(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const value): _fixedValue(value << _fracBits) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const number) {
	std::cout << "Float constructor called\n";
	_fixedValue = roundf(number * (1 << _fracBits));
}

Fixed::Fixed(Fixed const& cpy) {
	std::cout << "Copy constructor called \n";
	*this = cpy;
}

Fixed&	Fixed::operator=(Fixed const& rhs) {
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs)
		this->_fixedValue = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const {
	return (_fixedValue);
}

void	Fixed::setRawBits(int const raw) {
	_fixedValue = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedValue / (1 << _fracBits));
}

int		Fixed::toInt(void) const {
	return (_fixedValue >> _fracBits);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs) {
	o << rhs.toFloat();
	return (o);
}

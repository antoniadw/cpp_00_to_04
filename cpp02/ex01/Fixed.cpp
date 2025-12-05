/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:08 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/05 12:47:20 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>
#include <iostream>

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

Fixed&	Fixed::operator=(Fixed const& other) {
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->_fixedValue = other.getRawBits();
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

std::ostream&	operator<<(std::ostream& o, Fixed const& other) {
	o << other.toFloat();
	return (o);
}

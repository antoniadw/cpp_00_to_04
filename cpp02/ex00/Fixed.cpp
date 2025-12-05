/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:08 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/05 12:47:05 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int const Fixed::_fracBits = 8;

Fixed::Fixed(void): _fixedValue(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& cpy) {
	std::cout << "Copy constructor called \n";
	*this = cpy;
}

Fixed&	Fixed::operator=(Fixed const& other) {
	std::cout << "Copy assignment operator called\n";
	this->_fixedValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (_fixedValue);
}

void	Fixed::setRawBits(int const raw) {
	_fixedValue = raw;
}

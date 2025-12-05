/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:08 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/05 12:47:32 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>
#include <iostream>

const int	Fixed::_fracBits = 8;

Fixed::Fixed(void): _fixedValue(0) {
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const value): _fixedValue(value << _fracBits) {
	//std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const number) {
	//std::cout << "Float constructor called\n";
	_fixedValue = roundf(number * (1 << _fracBits));
}

Fixed::Fixed(Fixed const& cpy) {
	//std::cout << "Copy constructor called \n";
	*this = cpy;
}

Fixed&	Fixed::operator=(Fixed const& other) {
	//std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->_fixedValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called\n";
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

bool	Fixed::operator>(const Fixed& other) const {
	return (this->_fixedValue > other._fixedValue);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->_fixedValue < other._fixedValue);	
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->_fixedValue >= other._fixedValue);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->_fixedValue <= other._fixedValue);
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->_fixedValue == other._fixedValue);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->_fixedValue != other._fixedValue);
}

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed	result;
	result._fixedValue = this->_fixedValue + other._fixedValue;
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed	result;
	result._fixedValue = this->_fixedValue - other._fixedValue;
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const { //Handle overflow?
	Fixed		result;
	// long long	tmp = (long long)(this->_fixedValue) * other._fixedValue;
	// if (tmp > INT_MAX || tmp < INT_MIN) {
	// 	std::cerr << "Watch out, you risk overflow with those * values\n";
	// 	return (*this);
	// }
	// else
	// 	result._fixedValue = (int)tmp;
	result._fixedValue = this->_fixedValue * other._fixedValue >> _fracBits;
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const { //Handle overflow?
	Fixed	result;
	result._fixedValue = (this->_fixedValue << _fracBits) / other._fixedValue;
	return (result);	
}

Fixed&	Fixed::operator++() {
	this->_fixedValue++;
	return (*this);
}

Fixed&	Fixed::operator--() {
	this->_fixedValue--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	this->_fixedValue++;
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	this->_fixedValue--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a._fixedValue <= b._fixedValue)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a._fixedValue >= b._fixedValue)
		return (a);
	else
		return (b);	
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a._fixedValue <= b._fixedValue)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a._fixedValue >= b._fixedValue)
		return (a);
	else
		return (b);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& other) {
	o << other.toFloat();
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:30:49 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:18:00 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// === Constructors & Destructor =============================================

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type): _type(type) {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): _type(other._type) {
	std::cout << "Copy WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}


// === Operators =============================================================

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}


// === Accessors =============================================================

const std::string&	WrongAnimal::getType(void) const {
	return (_type);
}


// === Public Methods ========================================================

void	WrongAnimal::makeSound(void) const {
	std::cout << "Inaudible animal sound" << std::endl;
}

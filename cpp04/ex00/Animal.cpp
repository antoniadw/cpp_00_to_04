/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:33 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:14:54 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// === Constructors & Destructor =============================================

Animal::Animal(void) {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const std::string& type): _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other): _type(other._type) {
	std::cout << "Copy Animal Constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called" << std::endl;
}


// === Operators =============================================================

Animal&	Animal::operator=(const Animal& rhs) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}


// === Accessors =============================================================

const std::string&	Animal::getType(void) const {
	return (_type);
}


// === Public Methods ========================================================

void	Animal::makeSound(void) const {
	std::cout << "Inaudible animal sound" << std::endl;
}

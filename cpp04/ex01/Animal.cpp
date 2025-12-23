/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:33 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/23 16:17:47 by ade-woel         ###   ########.fr       */
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
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}


// === Operators =============================================================

Animal&	Animal::operator=(const Animal& rhs) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &rhs)
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

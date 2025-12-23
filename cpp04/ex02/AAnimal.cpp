/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:33 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/23 17:59:39 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// === Constructors & Destructor =============================================

AAnimal::AAnimal(void) {
	std::cout << "Default Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& type): _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other): _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal destructor called" << std::endl;
}


// === Operators =============================================================

AAnimal&	AAnimal::operator=(const AAnimal& rhs) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}


// === Accessors =============================================================

const std::string&	AAnimal::getType(void) const {
	return (_type);
}


// === Public Methods ========================================================

void	AAnimal::makeSound(void) const {
	std::cout << "Inaudible animal sound" << std::endl;
}

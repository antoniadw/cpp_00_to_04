/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:41 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 15:58:09 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// === Constructors & Destructor =============================================

Dog::Dog(void): Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other._type) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}


// === Operators =============================================================

Dog&	Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy assignment opertor called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}


// === Public Methods ========================================================

void	Dog::makeSound(void) const {
	std::cout << "Wouaf wouaaaaf..." << std::endl;
}

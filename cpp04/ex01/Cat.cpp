/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:20:23 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// === Constructors & Destructor =============================================

Cat::Cat(void): Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other._type) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}


// === Operators =============================================================

Cat&	Cat::operator=(const Cat& rhs) {
	std::cout << "Cat copy assignment opertor called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}


// === Public Methods ========================================================

void	Cat::makeSound(void) const {
	std::cout << "Meeeoooooooow..." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/23 16:50:44 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// === Constructors & Destructor =============================================

Cat::Cat(void): Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other._type) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}


// === Operators =============================================================

Cat&	Cat::operator=(const Cat& rhs) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		delete this->_brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}


// === Accessors =============================================================

void	Cat::setIdea(int index, const std::string& newIdea){
	if (index < 0 || index >= 100) {
		std::cerr << "Error - Invalid index" << std::endl;
		return ;	
	}		
	_brain->setIdea(index, newIdea);
}

const std::string	Cat::getIdea(int index) const {
	if (index < 0 || index >= 100) {
		std::cerr << "Error - Invalid index" << std::endl;
		return ("");	
	}
	return (_brain->getIdea(index));
}

void	Cat::showBrainAddress() const {
	std::cout << _brain;
}


// === Public Methods ========================================================

void	Cat::makeSound(void) const {
	std::cout << "Meeeoooooooow..." << std::endl;
}

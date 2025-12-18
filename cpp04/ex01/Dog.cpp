/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:41 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/18 13:27:22 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// === Constructors & Destructor =============================================

Dog::Dog(void): Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& other): Animal(other._type) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}


// === Operators =============================================================

Dog&	Dog::operator=(const Dog& rhs) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}


// === Accessors =============================================================

void	Dog::setIdea(int index, std::string& newIdea){
	if (index < 0 || index >= 100) {
		std::cerr << "Error - Invalid index" << std::endl;
		return ;	
	}
	_brain->setIdea(index, newIdea);
}

const std::string	Dog::getIdea(int index) const {
	if (index < 0 || index >= 100) {
		std::cerr << "Error - Invalid index" << std::endl;
		return ("");	
	}
	return (_brain->getIdea(index));
}

const Brain*	Dog::getBrainAddress() const {
	return(_brain);
}

// === Public Methods ========================================================

void	Dog::makeSound(void) const {
	std::cout << "Wouaf wouaaaaf..." << std::endl;
}

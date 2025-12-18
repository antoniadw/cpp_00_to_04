/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:03:26 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/18 13:26:45 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// === Constructors & Destructor =============================================

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}


// === Operators =============================================================

Brain&	Brain::operator=(const Brain& rhs) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}


// === Accessors =============================================================

void		Brain::setIdea(int index, std::string& newIdea) {
	if (index < 0 || index >= 100) {
		std::cerr << "Error - Invalid index" << std::endl;
		return ;	
	}
	_ideas[index] = newIdea;
}
	
const std::string	Brain::getIdea(int index) const {
	if (index < 0 || index >= 100) {
		std::cerr << "Error - Invalid index" << std::endl;
		return ("");	
	}
	return (_ideas[index]);
}

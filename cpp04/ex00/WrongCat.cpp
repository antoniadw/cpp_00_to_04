/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:30:44 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:21:16 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// === Constructors & Destructor =============================================

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other._type) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}


// === Operators =============================================================

WrongCat&	WrongCat::operator=(const WrongCat& rhs) {
	std::cout << "WrongCat copy assignment opertor called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}


// === Public Methods ========================================================

void	WrongCat::makeSound(void) const {
	std::cout << "Meeeoooooooow..." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:02:48 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/27 18:13:24 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Ice.hpp"

// === Constructors & Destructor =============================================

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(const Ice& other): AMateria("ice") {
	(void)other;
}

Ice::~Ice(void) {}


// === Operators =============================================================

Ice& Ice::operator=(const Ice& rhs) {
	(void)rhs;
	return (*this);
}


// === Public Methods ========================================================

AMateria*	Ice::clone(void) const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

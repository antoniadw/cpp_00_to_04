/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:02:42 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/27 18:13:19 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cure.hpp"

// === Constructors & Destructor =============================================

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(const Cure& other): AMateria("cure") {
	(void)other;
}

Cure::~Cure(void) {}


// === Operators =============================================================

Cure&	Cure::operator=(const Cure& rhs) {
	(void)rhs;
	return (*this);
}


// === Public Methods ========================================================

AMateria*	Cure::clone(void) const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

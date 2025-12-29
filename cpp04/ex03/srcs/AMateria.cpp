/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:30:31 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/29 14:45:15 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/AMateria.hpp"

// === Constructors & Destructor =============================================

AMateria::AMateria(void): _type("undefined") {}

AMateria::AMateria(std::string const& type): _type(type) {}

AMateria::AMateria(const AMateria& other) {
	(void)other;
}

AMateria::~AMateria(void) {}


// === Operators =============================================================

AMateria& AMateria::operator=(const AMateria& rhs) {
	(void)rhs;
	return (*this);
}


// === Accessors =============================================================

std::string const&	AMateria::getType() const {
	return (_type);
}


// === Public Methods ========================================================

void	AMateria::use(ICharacter& target) {
	std::cout << target.getName() << " is using a materia" << std::endl;
}

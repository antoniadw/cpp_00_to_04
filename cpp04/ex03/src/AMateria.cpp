/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:30:31 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/26 17:01:26 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// === Constructors & Destructor =============================================

AMateria::AMateria(void): _type("undefined") {}

AMateria::AMateria(std::string const& type): _type(type) {}

AMateria::AMateria(const AMateria& other) {}

AMateria::~AMateria(void) {}


// === Operators =============================================================

AMateria& AMateria::operator=(const AMateria& rhs) {
	return (*this);
}


// === Accessors =============================================================

std::string const&	AMateria::getType() const {
	return (_type);
}


// === Public Methods ========================================================

void	AMateria::use(ICharacter& target) {
	(void)target;
}

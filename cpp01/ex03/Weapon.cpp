/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:53 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/27 15:33:16 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const char *type) {
	if (type)
		_type = std::string(type);
	else
		_type = "default";
}

Weapon::~Weapon() {}

void	Weapon::setType(const std::string& newType) {
	_type = newType;
}

const std::string&	Weapon::getType(void) const {
	return (_type);
}

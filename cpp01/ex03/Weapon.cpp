/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:53 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/17 12:59:41 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std:: string& type): _type(type) {}

Weapon::~Weapon() {}

void	Weapon::setType(const std::string& newType) {
	_type = newType;
}

const std::string&	Weapon::getType(void) const {
	return (_type);
}

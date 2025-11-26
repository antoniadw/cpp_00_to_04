/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:36 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 11:03:11 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _Weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& newWeapon) {
	_Weapon = &newWeapon;
}

void	HumanB::attack() const 
{
	if (_Weapon){		
		std::cout 	<< _name 
					<< " attacks with their "
					<< _Weapon->getType() 
					<< std::endl;
	}
	else
		std::cout << _name << " has no weapon" << std::endl;
}

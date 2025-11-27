/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:36 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/27 15:30:25 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& newWeapon) {
	_weapon = &newWeapon;
}

void	HumanB::attack() const 
{
	if (_weapon){		
		std::cout 	<< _name 
					<< " attacks with their "
					<< _weapon->getType() 
					<< std::endl;
	}
	else
		std::cout << _name << " has no weapon" << std::endl;
}

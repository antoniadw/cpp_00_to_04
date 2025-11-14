/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:36 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 20:30:27 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

void	HumanB::setWeapon(const Weapon& newWeapon) {
	_Weapon = newWeapon;
}

void	HumanB::attack() const 
{
	std::cout 	<< _name 
				<< " attacks with their "
				<< _Weapon.getType() 
				<< std::endl;
}

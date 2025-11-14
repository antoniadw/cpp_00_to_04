/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:36 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 20:10:16 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _Weapon(NULL) {
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
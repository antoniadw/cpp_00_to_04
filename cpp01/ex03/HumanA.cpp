/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:33 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 20:10:07 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon type): _name(name), _Weapon(type) {
	return ;
}

HumanA::~HumanA() {
	return ;
}

void	HumanA::attack() const 
{
	std::cout 	<< _name 
				<< " attacks with their "
				<< _Weapon.getType() 
				<< std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:52:46 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/09 14:20:02 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void) 
{
	ScavTrap	scav("Maurice");

	std::cout << std::endl;
	std::cout << "--- PRESENTATIONS ---" << std::endl;
	std::cout << scav.getName() << " stats: " << std::endl;
	std::cout << "Hit points: " << scav.getHitPoints() << std::endl;
	std::cout << "Energy points: " << scav.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << scav.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << "--- INHERITATED ABILITIES ---" << std::endl;
	scav.takeDamage(10);
	std::cout << "Hit points are now: " << scav.getHitPoints() << std::endl;
	scav.beRepaired(5);
	std::cout << "Hit points are now: " << scav.getHitPoints() << std::endl;	
	std::cout << std::endl;
	
	std::cout << "--- REDEFINED AND SPECIAL ABILITIES ---" << std::endl;
	scav.attack("target");
	scav.guardGate();
	std::cout << std::endl;

	return (0);
}
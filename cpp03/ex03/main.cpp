/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:52:46 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/12 13:09:44 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void) 
{
	DiamondTrap diams("Mark");

	std::cout << std::endl;
	std::cout << "--- PRESENTATION ---" << std::endl;
	std::cout << "Hit points: " << diams.getHitPoints() << std::endl;
	std::cout << "Energy points: " << diams.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << diams.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	std::cout << "--- INHERITED ABILITIES ---" << std::endl;	
	diams.takeDamage(30);
	diams.beRepaired(15);
	diams.guardGate();
	diams.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- SPECIAL ABILITIES ---" << std::endl;	
	diams.attack("enemy");
	std::cout << std::endl;
	diams.whoAmI();
	std::cout << std::endl;

	return (0);
}
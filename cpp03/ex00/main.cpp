/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:35:11 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/12 12:53:04 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	attack("Attacker");
	ClapTrap	defend("Defender");
	
	std::cout << std::endl;
	std::cout << "--- PRESENTATIONS ---" << std::endl;
	std::cout << attack.getName() << " stats: " << std::endl;
	std::cout << "Hit points: " << attack.getHitPoints() << std::endl;
	std::cout << "Energy points: " << attack.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << attack.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << defend.getName() << " stats: " << std::endl;
	std::cout << "Hit points: " << defend.getHitPoints() << std::endl;
	std::cout << "Energy points: " << defend.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << defend.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << "---ATTACKING--" << std::endl;
	attack.attack("Defender");
	attack.attack("Defender");
	defend.takeDamage(2);
	std::cout << attack.getName() << "'s energy points are now: " << attack.getEnergyPoints() << std::endl;
	std::cout << defend.getName() << "'s hit points are now: " << defend.getHitPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "---REPAIRING--" << std::endl;
	defend.beRepaired(2);
	std::cout << defend.getName() << "'s hit points are now: " << defend.getHitPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "---EXHAUSTION---" << std::endl;
	while (attack.getEnergyPoints() > 0) {
		attack.attack("Defender");
		std::cout << attack.getName() << "'s energy points are now: " << attack.getEnergyPoints() << std::endl;
	}
	attack.attack("Defender");
	attack.beRepaired(1);
	std::cout << std::endl;

	std::cout << "---FULLY DAMAGED---" << std::endl;
	defend.takeDamage(10);
	std::cout << defend.getName() << "'s hit points are now: " << defend.getHitPoints() << std::endl;
	defend.beRepaired(1);
	defend.attack("other target");
	std::cout << std::endl;
}

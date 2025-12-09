/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:52:46 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/09 16:08:22 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void) 
{
	FragTrap	frag("Paul");

	std::cout << std::endl;
	std::cout << "--- PRESENTATIONS ---" << std::endl;
	std::cout << frag.getName() << " stats: " << std::endl;
	std::cout << "Hit points: " << frag.getHitPoints() << std::endl;
	std::cout << "Energy points: " << frag.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << frag.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << "--- INHERITATED ABILITIES ---" << std::endl;
	frag.takeDamage(20);
	std::cout << "Hit points are now: " << frag.getHitPoints() << std::endl;
	frag.beRepaired(15);
	std::cout << "Hit points are now: " << frag.getHitPoints() << std::endl;	
	std::cout << std::endl;
	
	std::cout << "--- SPECIAL ABILITIES ---" << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
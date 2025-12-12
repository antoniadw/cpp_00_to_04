/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:10:47 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/11 11:26:13 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// === Constructors & Destructor =============================================

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name", 100, 50, 30),
							ScavTrap(),
							FragTrap(),
							_name("Default")
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name):	ClapTrap(name + "_clap_name", 100, 50, 30),
													ScavTrap(name),
													FragTrap(name),
													_name(name)
{
	std::cout << "DiamondTrap constructor of " << _name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other._name + "_clap_name", other._hitPoints, other._energyPoints, other._attackDamage),
													ScavTrap(other._name),
													FragTrap(other._name),
													_name(other._name)
{
	std::cout << "Copy DiamondTrap constructor of " << _name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor of " << _name << " called" << std::endl;
}


// === Operators =============================================================

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}


// === Public Methods ========================================================

void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "Am I a Scav? Am I a Frag? No, IM a DIAMOND" << std::endl;
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}


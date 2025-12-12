/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:03:09 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/12 13:08:49 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// === Constructors & Destructor =============================================

ScavTrap::ScavTrap(): ClapTrap("Default", 100, 50, 20) {
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap constructor of " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other._name, other._hitPoints, other._energyPoints, other._attackDamage)
{
	std::cout << "Copy ScavTrap constructor of " << _name << " called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor of " << _name << " called" << std::endl;
}


// === Operators =============================================================

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}


// === Public Methods ========================================================

void	ScavTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout <<_name << " is dead and can't attack" << std::endl;
		return ;
	}
	else if (_energyPoints > 0) {
		std::cout 	<< "PLOT TWIST! ScavTrap " << _name
					<< " attacks " << target
					<< ", causing " << _attackDamage
					<< " points of damage!" << std::endl;
		_energyPoints--;
		return ;
	}
	else {
		std::cout << _name << " is too weak to attack" << std::endl;
		return ;	
	}
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " is now in gate keeping mode" << std::endl;
}

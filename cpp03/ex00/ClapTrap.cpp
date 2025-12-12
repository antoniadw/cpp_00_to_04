/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:35:19 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/11 13:30:10 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// === Constructors & Destructor =============================================

ClapTrap::ClapTrap(void):	_name("Default"),
							_hitPoints(10),
							_energyPoints(10),
							_attackDamage(0) {
	std::cout 	<< "Default constructor of " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name):	_name(name),
												_hitPoints(10),
												_energyPoints(10),
												_attackDamage(0) {
	std::cout << "Constructor of " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other):	_name(other._name),
											_hitPoints(other._hitPoints),
											_energyPoints(other._energyPoints),
											_attackDamage(other._attackDamage) {
	std::cout << "Copy constructor of " << _name << " called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor of " << _name << " called" << std::endl;
}


// === Operators =============================================================

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}


// === Accessors ========================================================

const std::string&	ClapTrap::getName(void) const {
	return (_name);
}

unsigned int		ClapTrap::getHitPoints(void) const {
	return (_hitPoints);	
}

unsigned int		ClapTrap::getEnergyPoints(void) const {
	return (_energyPoints);
}

unsigned int		ClapTrap::getAttackDamage(void) const {
	return (_attackDamage);
}


// === Public Methods ============================================================

void	ClapTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout <<_name << " is dead and can't attack" << std::endl;
		return ;
	}
	else if (_energyPoints > 0) {
		std::cout 	<< "ClapTrap " << _name
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

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount < 0) {
		std::cout << "Invalid damage value, nothing happened" << std::endl;
		return ;
	}
	else if (amount >= _hitPoints) {
		std::cout	<< "ClapTrap " << _name
					<< " has suffered " << _hitPoints
					<< " direct damages!" << std::endl;
		_hitPoints = 0;
		return ;
	}
	else {
		_hitPoints -= amount;
		std::cout	<< "ClapTrap " << _name
					<< " has suffered " << amount
					<< " direct damages!" << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << _name << " is dead and can't be repaired" << std::endl;
		return ;
	}
	else if ((int)amount < 0) {
		std::cout << "Invalid repair value, nothing happened" << std::endl;
		return ;
	}
	else if (_energyPoints > 0) {
		_hitPoints += amount;
		std::cout	<< "ClapTrap " << _name
					<< " got repaired by " << amount
					<< " hit points!" << std::endl;
		_energyPoints--;
	}
	else {
		std::cout << _name << " is too weak to repair itself" << std::endl;
		return ;
	}
}

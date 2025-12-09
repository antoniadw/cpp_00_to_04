/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:35:19 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/09 13:10:58 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// === Constructors & Destructor =============================================

ClapTrap::ClapTrap(void):	_name("Default"),
							_hitPoints(10),
							_energyPoints(10),
							_attackDamage(0) 
{
	std::cout << "Default ClapTrap constructor of " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name):	_name(name),
												_hitPoints(10),
												_energyPoints(10),
												_attackDamage(0) 

{
	std::cout << "ClapTrap constructor of " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, unsigned int hp, unsigned int ep, unsigned int ad):
	_name(name),
	_hitPoints(hp),
	_energyPoints(ep),
	_attackDamage(ad) 
{
	std::cout << "ClapTrap constructor of " << _name << " called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap& other):	_name(other._name),
											_hitPoints(other._hitPoints),
											_energyPoints(other._energyPoints),
											_attackDamage(other._attackDamage)
{
	std::cout << "Copy ClapTrap constructor of " << _name << " called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor of " << _name << " called" << std::endl;
}


// === Accessors ========================================================

const std::string&	ClapTrap::getName(void) const {
	return (_name);
}

int		ClapTrap::getHitPoints(void) const {
	return (_hitPoints);	
}

int		ClapTrap::getEnergyPoints(void) const {
	return (_energyPoints);
}

int		ClapTrap::getAttackDamage(void) const {
	return (_attackDamage);
}

// === Operators =============================================================

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

// === Public Methods ============================================================

void	ClapTrap::attack(const std::string& target) {
	if (_hitPoints <= 0) {
		std::cout	<< "Oops, " << _name
					<< " is dead and can't attack" << std::endl;
		return ;
	}
	if (_energyPoints <= 0) {
		std::cout	<< "Oops, " << _name
					<< " is too weak to attack" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout 	<< "ClapTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout	<< "ClapTrap " << _name
				<< " has suffered " << amount
				<< " direct damages!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0) {
		std::cout	<< "Oops, " << _name
					<< " is dead and can't be repaired" << std::endl;
		return ;
	}
	if (_energyPoints <= 0) {
		std::cout	<< "Oops, " << _name
					<< " is too weak to repair itself" << std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout	<< "ClapTrap " << _name
				<< " got repaired by " << amount
				<< " hitpoint(s)!" << std::endl;
}

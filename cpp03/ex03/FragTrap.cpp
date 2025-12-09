/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:23:26 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/09 16:08:47 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// === Constructors & Destructor =============================================

FragTrap::FragTrap(): ClapTrap("Default", 100, 100, 30){
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap constructor of " << _name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other._name, other._hitPoints, other._energyPoints, other._attackDamage){
	std::cout << "Copy FragTrap constructor of " << _name << " called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor of " << _name << " called" << std::endl;
}

// === Public Methods ========================================================

void	FragTrap::highFivesGuys(void){
	std::cout << "High five ?! 🙌" << std::endl;
}

// === Operators =============================================================

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

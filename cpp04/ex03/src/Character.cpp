/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:17:38 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/26 21:45:15 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// === Constructors & Destructor =============================================

Character::Character(void): _name("Default") {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string& name): _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other): _name(other._name) {
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i] != NULL) {
			this->_inventory[i] = other._inventory[i]->clone();
		}
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] != NULL) {
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}


// === Operators =============================================================

Character&	Character::operator=(const Character& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			delete _inventory[i];
			if (rhs._inventory[i] != NULL)
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}


// === Accessors =============================================================

std::string const&	Character::getName(void) const {
	return(_name);
}


// === Public Methods ========================================================

void	Character::equip(AMateria* m) {}

void	Character::unequip(int idx) {}

void	Character::use(int idx, ICharacter& target) {}

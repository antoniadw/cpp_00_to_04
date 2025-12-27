/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:17:38 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/27 18:13:14 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Character.hpp"

// === Constructors & Destructor =============================================

Character::Character(void): _name("Default") {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name): _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other): _name(other._name) {
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
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

void	Character::equip(AMateria* m) {
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || _inventory[idx] == NULL) {
		std::cout << "Index is invalid" << std::endl;
		return ;
	}
	else
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4) {
		std::cout << "Index is invalid" << std::endl;
		return ;
	}
	else if (_inventory[idx] == NULL) {
		std::cout << "Inventory is empty" << std::endl;
		return ;
	}
	else
		_inventory[idx]->use(target);
}

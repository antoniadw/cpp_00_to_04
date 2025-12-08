/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:35:19 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/08 12:59:31 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {};

ClapTrap::ClapTrap(std::string& name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor of " << _name << "called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor of " << _name << "called" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:35:38 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 15:35:41 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	std::cout << "Inside function newZombie" << std::endl;
	Zombie	*newZomb = new Zombie(name);
	std::cout << name << " alive in function" << std::endl;
	return (newZomb);
}
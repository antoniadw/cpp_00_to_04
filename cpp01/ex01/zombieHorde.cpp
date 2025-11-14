/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:48:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 18:22:23 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0) {
		std::cout << "Horde must have a positive amount of recruits" << std::endl;
		return (NULL);
	}
	Zombie	*newHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		newHorde[i].set_Name(name);
	return (newHorde);
}

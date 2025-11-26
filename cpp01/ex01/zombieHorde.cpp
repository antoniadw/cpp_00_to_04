/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:48:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/25 13:13:02 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0) {
		std::cerr << "Horde must have a positive amount of recruits" << std::endl;
		return (NULL);
	}
	if (N > 1000) {
		std::cerr << "This is a lot of zombies. Try something more reasonnable?" << std::endl;
		return (NULL);
	}
	if (name.empty())
		name = "default";
	Zombie	*newHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		newHorde[i].setName(name);
	return (newHorde);
}

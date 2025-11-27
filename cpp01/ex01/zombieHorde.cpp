/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:48:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/27 15:14:25 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, const char *name){
	if (!name) {
		std::cerr << "Error, recruits must have a valid name" << std::endl;
		return (NULL);
	}
	else
		return (zombieHorde(N, std::string(name)));
}

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0) {
		std::cerr << "Error, horde must have a positive amount of recruits" << std::endl;
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

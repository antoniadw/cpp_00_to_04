/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:09:06 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/25 21:45:49 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
		std::cout << "----- HORDE WITH 3 ZOMBIES -----"<< std::endl;
		int N = 3;
		std::string	name = "Lucas";
		Zombie*	horde = zombieHorde(N, name);
		if (!horde) {
			std::cout << "Failed to create zombie horde" << std::endl;
			return (0);
		}
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete [] horde;
	}
	// {
	// 	std::cout << "----- HORDE WITH 2000 ZOMBIES -----"<< std::endl;
	// 	int N = 2000;
	// 	std::string	name = "Lucas";
	// 	Zombie*	horde = zombieHorde(N, name);
	// 	if (!horde) {
	// 		std::cout << "Failed to create zombie horde" << std::endl;
	// 		return (0);
	// 	}
	// 	for (int i = 0; i < N; i++)
	// 		horde[i].announce();
	// 	delete [] horde;
	// }
	// {
	// 	std::cout << "----- ATTEMPT WITH 0 ZOMBIE -----"<< std::endl;
	// 	int N = 0;
	// 	std::string	name = "Lucas";
	// 	Zombie*	horde = zombieHorde(N, name);
	// 	if (!horde) {
	// 		std::cout << "Failed to create zombie horde" << std::endl;
	// 		return (0);
	// 	}
	// 	for (int i = 0; i < N; i++)
	// 		horde[i].announce();
	// 	delete [] horde;
	// }
	// {
	// 	std::cout << "----- ATTEMPT WITH -10 ZOMBIES -----"<< std::endl;
	// 	int N = -10;
	// 	std::string	name = "Lucas";
	// 	Zombie*	horde = zombieHorde(N, name);
	// 	if (!horde) {
	// 		std::cout << "Failed to create zombie horde" << std::endl;
	// 		return (0);
	// 	}
	// 	for (int i = 0; i < N; i++)
	// 		horde[i].announce();
	// 	delete [] horde;
	// }
	return (0);
}

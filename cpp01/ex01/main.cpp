/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:09:06 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/27 15:23:33 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
		std::cout << "----- HORDE WITH 3 ZOMBIES -----"<< std::endl;
		int N = 3;
		Zombie*	horde = zombieHorde(N, "Lucas");
		if (!horde) {
			std::cerr << "Failed to create zombie horde" << std::endl;
			return (0);
		}
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete [] horde;
	}
	// {
	// 	std::cout << "----- HORDE WITH 2000 ZOMBIES -----"<< std::endl;
	// 	int N = 2000;
	// 	Zombie*	horde = zombieHorde(N, "Lucas");
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
	// 	Zombie*	horde = zombieHorde(N, "Lucas");
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
	// 	Zombie*	horde = zombieHorde(N, "Lucas");
	// 	if (!horde) {
	// 		std::cout << "Failed to create zombie horde" << std::endl;
	// 		return (0);
	// 	}
	// 	for (int i = 0; i < N; i++)
	// 		horde[i].announce();
	// 	delete [] horde;
	// }
	// {
	//	std::cout << "----- ATTEMPT WITH NULL ZOMBIES -----"<< std::endl;
	// 	int N = -10;
	// 	Zombie*	horde = zombieHorde(N, NULL);
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

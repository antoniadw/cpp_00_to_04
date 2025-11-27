/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:43:02 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/27 17:11:31 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "----- CREATING A STACK ZOMBIE -----" << std::endl;
	Zombie	zombie("Didier");
	zombie.announce();
	std::cout << std::endl;

	std::cout << "----- CREATING ANOTHER STACK ZOMBIE -----" << std::endl;
	std::cout << "Calling randomChump function" << std::endl;
	randomChump("Carlos");
	std::cout << "Back in main function after randomChump" << std::endl;
	std::cout << std::endl;
	
	std::cout << "----- CREATING A HEAP ZOMBIE -----" << std::endl;
	std::cout << "Calling newZombie function" << std::endl;
	Zombie	*heapZombie = newZombie("Paul");
	std::cout << "Back in main function after newZombie" << std::endl;
	heapZombie->announce();
	std::cout << std::endl;

	delete heapZombie;
	return (0);
}

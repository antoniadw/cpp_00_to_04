/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:45:29 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 15:37:34 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	std::cout << "----- LEVEL 4 DEBUG LOG ----" << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "----- LEVEL 3 INFO LOG ----" << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "----- LEVEL 2 WARING LOG ----" << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "----- LEVEL 1 ERROR LOG ----" << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl;
	
	std::cout << "----- EXTRA TESTS ----" << std::endl;
	Harl.complain("random");
	Harl.complain("");
	Harl.complain(NULL);
}

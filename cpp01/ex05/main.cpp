/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:45:29 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 17:55:22 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	std::cout << "----- HARL COMPLAINS ----" << std::endl;
	std::cout << "* DEBUG *" << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "* INFO *" << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "* WARINING *" << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "* ERROR *" << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl;
	
	std::cout << "----- FAIL TESTS ----" << std::endl;
	Harl.complain("random");
	Harl.complain("");
	Harl.complain(NULL);
}

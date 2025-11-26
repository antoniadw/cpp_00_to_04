/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:45:29 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 15:38:47 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	std::cout << "----- HARL COMPLAINS ----" << std::endl;
	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");
	
	std::cout << "----- EXTRA TESTS ----" << std::endl;
	Harl.complain("random");
	Harl.complain("");
	Harl.complain(NULL);
}

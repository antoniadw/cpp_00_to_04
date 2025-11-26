/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:45:29 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 17:47:33 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	convertArg(const std::string& str)
{
	if (str == "DEBUG")
		return (0);
	else if (str == "INFO")
		return (1);
	else if (str == "WARNING")
		return (2);
 	else if (str == "ERROR")
		return (3);
	else
		return (-1);
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2) {
		int	level = convertArg(argv[1]);
		switch (level){
			case 0:
				harl.complain("DEBUG");
				std::cout << std::endl;
			case 1:
				harl.complain("INFO");
				std::cout << std::endl;
			case 2:
				harl.complain("WARNING");
				std::cout << std::endl;
			case 3:
				harl.complain("ERROR");
				break ;
			default :
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break ;
		}	
	}
	else {
		std::cerr << "Error - Please specify one log level: ./harlFilter [loglevel]" << std::endl;
		return (1);
	}
	return (0);
}

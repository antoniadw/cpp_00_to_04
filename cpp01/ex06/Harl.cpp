/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:45:24 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 17:50:59 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::debug(void) {
	std::cout 	<< "[ DEBUG ]" << std::endl;
	std::cout 	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
				<< std::endl;
}
void	Harl::info(void) {
	std::cout 	<< "[ INFO ]" << std::endl;
	std::cout 	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
				<< std::endl;
				
}
void	Harl::warning(void) {
	std::cout 	<< "[ WARNING ]" << std::endl;
	std::cout 	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." 
				<< std::endl;
}
void	Harl::error(void) {
	std::cout 	<< "[ ERROR ]" << std::endl;
	std::cout 	<< "This is unacceptable! I want to speak to the manager now." 
				<< std::endl;
}

void	Harl::complain(std::string level) {
	struct Pairing {
		std::string	name;
		void(Harl:: *ptr)();
	};

	Pairing	levels[4] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	for (int i = 0; i < 4; i++) {
		if (levels[i].name == level) {
			(this->*levels[i].ptr)();
			return ;
		}	
	}
	std::cerr << "Error, Harl has nothing to complain about" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:45:24 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 15:34:51 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::debug(void) {
	std::cout 	<< "This is a DEBUG log - level 4" << std::endl;
}
void	Harl::info(void) {
	std::cout << "This is an INFO log - level 3" << std::endl;
				
}
void	Harl::warning(void) {
	std::cout << "This is a WARNING log - level 2" << std::endl;
}
void	Harl::error(void) {
	std::cout << "This is an ERROR log - level 1" << std::endl;
}

void	Harl::complain(const char *level) {
	if (!level) {
		std::cerr << "Error, Harl has nothing to complain about" << std::endl;
		return ;
	}
	else
		complain(std::string(level));
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
		if (levels[i].name == level) 
		{
			(this->*levels[i].ptr)();
			for (int j = i + 1; j < 4; j++)
				(this->*levels[j].ptr)();
			return ;
		}	
	}
	std::cerr << "Error, Harl has nothing to complain about" << std::endl;
}

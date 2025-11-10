/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:35:53 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/10 12:02:38 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string	buffer;
	PhoneBook	MyPhoneBook;

	std::cout << "Welcome in this awesome PhoneBook" << std::endl;
	std::cout << "Type in ADD, SEARCH or EXIT:" << std::endl;
	while(std::getline(std::cin, buffer)) {
		if (buffer == "ADD") {
			//std::cout << "ADD detected" << std::endl;
			MyPhoneBook.addContact();
			if (std::cin.eof())
				break;
		}
		else if (buffer == "SEARCH") {
			//std::cout << "SEARCH detected" << std::endl;
			MyPhoneBook.searchContact();
			if (std::cin.eof())
				break;
		}
		else if (buffer == "EXIT") {
			break;
		}
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "Leaving PhoneBook bye" << std::endl;
	return (0);
}

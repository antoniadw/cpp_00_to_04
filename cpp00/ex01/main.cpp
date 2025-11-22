/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:35:53 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/22 16:00:46 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string	buffer;
	PhoneBook	MyPhoneBook;

	system("clear");
	std::cout << "** Welcome in this awesome PhoneBook **" << std::endl;
	sleep(1);
	std::cout << "> Type in ADD, SEARCH or EXIT:" << std::endl;
	while(std::getline(std::cin, buffer)) {
		if (buffer == "ADD") {
			MyPhoneBook.addContact();
			if (std::cin.eof())
				break;
		}
		else if (buffer == "SEARCH") {
			MyPhoneBook.searchContact();
			if (std::cin.eof())
				break;
		}
		else if (buffer == "EXIT") {
			break;
		}
		else
			std::cout << "** UNKNOWN COMMAND **" << std::endl;
		std::cout << "> Type in ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "** Leaving PhoneBook bye **" << std::endl;
	return (0);
}

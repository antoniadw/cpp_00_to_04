/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:35:53 by ade-woel          #+#    #+#             */
/*   Updated: 2025/10/29 19:05:15 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	char		buffer[512];
	PhoneBook	MyPhoneBook;

	std::cout << "Type in ADD, SEARCH or EXIT:" << std::endl;
	std::cin >> buffer;
	std::cout << "You entered: [ "<< buffer <<" ]" << std::endl;
	return (0);
}
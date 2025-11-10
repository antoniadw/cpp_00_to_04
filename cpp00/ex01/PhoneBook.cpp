/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:32:13 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/10 12:19:31 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) {
	//std::cout << "PhoneBook Constructor called" << std::endl;
	this->_totalContacts = 0;
	this->_nextIndex = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	//std::cout << "PhoneBook Destructor called" << std::endl;
	return;
}

void	PhoneBook::addContact(void){

	Contact		newContact;
	std::string	buffer;
	
	std::cout << "[ New contact creation ]" << std::endl;
	
	buffer = fieldFill("first name");
	if (std::cin.eof())
		return;
	newContact.set_firstName(buffer);
	
	buffer = fieldFill("last name");
	if (std::cin.eof())
		return;
	newContact.set_lastName(buffer);

	buffer = fieldFill("nickname");
	if (std::cin.eof())
		return;
	newContact.set_nickName(buffer);

	buffer = fieldFill("phone number");
	if (std::cin.eof())
		return;
	newContact.set_phoneNumber(buffer);

	buffer = fieldFill("darkest secret");
	if (std::cin.eof())
		return;
	newContact.set_darkestSecret(buffer);
	
	// newContact.set_lastName(fieldFill("last name"));
	// newContact.set_nickName(fieldFill("nick name"));
	// newContact.set_phoneNumber(fieldFill("phone number"));
	// newContact.set_darkestSecret(fieldFill("darkest secret"));
	
	_contacts[_nextIndex] = newContact;
	if (_totalContacts < 3)
		_totalContacts++;
	if (++_nextIndex >= 3)
		_nextIndex = 0;
	
	std::cout << "New contact added to PhoneBook" << std::endl;
	// std::cout << "Total contacts is now "<<_totalContacts<<"" << std::endl;
	// std::cout << "Next index is now "<<_nextIndex<<"" << std::endl;
	return;
}

std::string	PhoneBook::fieldFill(std::string fieldId) {
	std::string	buffer;

	std::cout << "Enter contact "<< fieldId <<":" << std::endl;
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {
		std::cout << std::endl;
		return ("");
	}
	while(buffer.empty()){
		std::cout << "Field can not be empty" << std::endl;
		std::cout << "Enter contact "<< fieldId <<":" << std::endl;
		std::getline(std::cin, buffer);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ("");
		}
	}
	return (buffer);
}

void	PhoneBook::searchContact(void) const {
	
	return;
}

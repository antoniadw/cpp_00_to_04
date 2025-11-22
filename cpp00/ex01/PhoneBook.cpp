/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:32:13 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/22 13:37:40 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nextIndex(0), _totalContacts(0) {
	return;
}

PhoneBook::~PhoneBook() {
	return;
}

void	PhoneBook::addContact(void)
{
	Contact		newContact;
	std::string	buffer;
	
	system("clear");
	std::cout << "** CREATING CONTACT "<<_nextIndex + 1<<"/9 **" << std::endl;
	buffer = fieldFill("first name");
	if (std::cin.eof())
		return;
	newContact.setFirstName(buffer);
	
	buffer = fieldFill("last name");
	if (std::cin.eof())
		return;
	newContact.setLastName(buffer);

	buffer = fieldFill("nickname");
	if (std::cin.eof())
		return;
	newContact.setNickName(buffer);

	buffer = fieldFill("phone number");
	if (std::cin.eof())
		return;
	newContact.setPhoneNumber(buffer);

	buffer = fieldFill("darkest secret");
	if (std::cin.eof())
		return;
	newContact.setDarkestSecret(buffer);

	_contacts[_nextIndex] = newContact;
	if (_totalContacts < 8)
		_totalContacts++;
	if (++_nextIndex >= 8)
		_nextIndex = 0;
	
	std::cout << "** NEW CONTACT ADDED SUCCESSFULLY **" << std::endl;
	sleep(1);
	system("clear");
	return;
}

bool	isOnlySpace(std::string buffer)
{
	for (size_t i = 0; i < buffer.length(); i++)
	{
		if (std::isspace((buffer[i]) == 0))
			return (false);
	}
	return (true);
}

std::string	PhoneBook::fieldFill(std::string fieldId)
{
	std::string	buffer;

	std::cout << "> Enter contact "<< fieldId <<":" << std::endl;
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {
		std::cout << std::endl;
		return ("");
	}
	while (buffer.empty() || isOnlySpace(buffer))
	{
		std::cout << "Field can not be empty" << std::endl;
		std::cout << "> Enter contact "<< fieldId <<":" << std::endl;
		std::getline(std::cin, buffer);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ("");
		}
	}
	return (buffer);
}

void	PhoneBook::searchContact(void) const 
{
	if (_totalContacts == 0) 
	{
		std::cout << "** PhoneBook is empty **" << std::endl;
		sleep(1);
		system("clear");
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout	<< std::setw(10) << "ID" << "|" 
				<< std::setw(10) << "FIRSTNAME" << "|"
				<< std::setw(10) << "LASTNAME" << "|"
				<< std::setw(10) << "NICKNAME" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0 ; i < _totalContacts ; i++) 
	{
		std::cout 	<< std::setw(10) << i + 1 << "|"
					<< std::setw(10) << _trimString(_contacts[i].getFirstName(), 10) << "|"
					<< std::setw(10) << _trimString(_contacts[i].getLastName(), 10) << "|"
					<< std::setw(10) << _trimString(_contacts[i].getNickName(), 10) << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	sleep(1);
	int id = _getDisplayId();
	if (id == -1) {
		sleep(1);
		system("clear");
		return ;
	}
	_displayContact(id);
	return ;
}

std::string	PhoneBook::_trimString(std::string str, size_t len) const 
{
	if (str.length() >= len)
		return (str.substr(0, len -1) + '.');
	return (str);
}

int	PhoneBook::_getDisplayId(void) const
{
	int			index;
	std::string	buffer;
	
	std::cout << "> Enter index to display full contact details:" << std::endl;
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {
		std::cout << std::endl;
		return (-1);
	}
	if (buffer.size() > 1) {
		std::cout << "** Invalid index **" << std::endl;
		return (-1);
	}
	index = buffer[0] - '0';
	if (index < 0 || index > _totalContacts) {
		std::cout << "** Invalid index **" << std::endl;
		return (-1);
	}
	return (index);
}

void	PhoneBook::_displayContact(int index) const
{
	std::cout << "\n--- Contact Details ---" << std::endl;
	std::cout << "First name: " << _contacts[index - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[index - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index - 1].getNickName() << std::endl;
	std::cout << "Phone number: " << _contacts[index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[index -1].getDarkestSecret() << std::endl;
	std::cout << std::endl;
	std::cout << "** PRESS ANY KEY TO CONTINUE **" << std::endl;
	std::cin.get();
	system("clear");
}

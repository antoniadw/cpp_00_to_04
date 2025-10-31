/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:32:13 by ade-woel          #+#    #+#             */
/*   Updated: 2025/10/31 10:40:03 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook Constructor called" << std::endl;
	this->_nbContacts = 0;
	this->_nextIndex = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook Destructor called" << std::endl;
	return;
}

void	PhoneBook::addContact(void){

	Contact	newContact;
	
	//std::cout << 
	return;
}

void	PhoneBook::searchContact(void) const {
	
	return;
}

void PhoneBook::showContact(void) const {

	return;
}

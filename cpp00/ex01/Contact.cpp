/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:57:49 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/22 12:15:20 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
	//std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact() {
	//std::cout << "Contact Destructor called" << std::endl;
	return;
}

void	Contact::setFirstName(std::string input) {
	_firstName = input;
}

void	Contact::setLastName(std::string input) {
	_lastName = input;
}

void	Contact::setNickName(std::string input) {
	_nickName = input;
}

void	Contact::setPhoneNumber(std::string input) {
	_phoneNumber = input;
}

void	Contact::setDarkestSecret(std::string input) {
	_darkestSecret = input;
}

std::string	Contact::getFirstName(void) const {
	return (_firstName);
}

std::string	Contact::getLastName(void) const {
	return (_lastName);
}

std::string	Contact::getNickName(void) const {
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void) const {
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (_darkestSecret);
}

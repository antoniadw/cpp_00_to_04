/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:57:49 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/10 14:39:49 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	//std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void) {
	//std::cout << "Contact Destructor called" << std::endl;
	return;
}

void	Contact::set_firstName(std::string input) {
	_firstName = input;
	//std::cout << "First name set to "<<_firstName <<"" << std::endl;
}

void	Contact::set_lastName(std::string input) {
	_lastName = input;
}

void	Contact::set_nickName(std::string input) {
	_nickName = input;
}

void	Contact::set_phoneNumber(std::string input) {
	_phoneNumber = input;
}

void	Contact::set_darkestSecret(std::string input) {
	_darkestSecret = input;
}

std::string	Contact::get_firstName(void) const {
	return (_firstName);
}

std::string	Contact::get_lastName(void) const {
	return (_lastName);
}

std::string	Contact::get_nickName(void) const {
	return (_nickName);
}

std::string	Contact::get_phoneNumber(void) const {
	return (_phoneNumber);
}

std::string	Contact::get_darkestSecret(void) const {
	return (_darkestSecret);
}

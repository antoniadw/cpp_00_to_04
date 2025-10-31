/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:57:49 by ade-woel          #+#    #+#             */
/*   Updated: 2025/10/29 11:58:47 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void) {
	std::cout << "Contact Destructor called" << std::endl;
	return;
}

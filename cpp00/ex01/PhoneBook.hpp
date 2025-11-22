/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:16:36 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/22 13:00:31 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <unistd.h>
# include <stdlib.h>

class PhoneBook {
	private:
		int			_nextIndex;
		int			_totalContacts;
		Contact		_contacts[8];
		int			_getDisplayId(void) const;
		void		_displayContact(int index) const;
		std::string	_trimString(std::string str, size_t len) const;
		
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		addContact();
		void		searchContact() const;
		std::string	fieldFill(std::string fieldId);
};

#endif

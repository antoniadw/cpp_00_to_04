/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:16:36 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/12 21:43:20 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook(int i, int j);
	~PhoneBook(void);

	void		addContact();
	void		searchContact() const;
	std::string	fieldFill(std::string fieldId);

private:
	int			_nextIndex;
	int			_totalContacts;
	Contact		_contacts[8];
	int			_getDisplayId(void) const;
	void		_displayContact(int index) const;
	std::string	_trimString(std::string str, size_t len) const;
	
};

#endif

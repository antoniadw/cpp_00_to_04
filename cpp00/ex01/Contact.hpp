/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:17:14 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 11:14:14 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact {
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string _darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		void		set_firstName(std::string input);
		void		set_lastName(std::string input);
		void		set_nickName(std::string input);
		void		set_phoneNumber(std::string input);
		void		set_darkestSecret(std::string input);
		
		std::string	get_firstName(void) const;
		std::string	get_lastName(void) const;
		std::string	get_nickName(void) const;
		std::string	get_phoneNumber(void) const;
		std::string	get_darkestSecret(void) const;
};

#endif
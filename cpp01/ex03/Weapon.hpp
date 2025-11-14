/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:52:02 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 20:28:55 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon 
{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon(const std::string& type);
		~Weapon();

		void				setType(const std::string& newType);
		const std::string&	getType(void) const;
};

#endif
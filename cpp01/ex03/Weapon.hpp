/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:52:02 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 19:58:33 by ade-woel         ###   ########.fr       */
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
		Weapon(const std::string& type);
		~Weapon();

		void				setType(const std::string& newType);
		const std::string&	getType(void) const;
};

#endif
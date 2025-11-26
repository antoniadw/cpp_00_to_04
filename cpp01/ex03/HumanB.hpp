/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:52:33 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/26 17:56:42 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon*		_weapon;
	
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon& newWeapon);	
};

#endif
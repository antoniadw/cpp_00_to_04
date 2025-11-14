/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:52:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 19:35:26 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA 
{
	private:
		std::string	_name;
		Weapon		_Weapon;

	public:
		HumanA(std::string name, Weapon type);
		~HumanA();

		void	attack() const;
};

#endif
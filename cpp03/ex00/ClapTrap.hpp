/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:35:16 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/08 12:51:41 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string& name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap(void);

		ClapTrap&	operator=(const ClapTrap& other);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amout);
		void		beRepaired(unsigned int amout);
};

#endif
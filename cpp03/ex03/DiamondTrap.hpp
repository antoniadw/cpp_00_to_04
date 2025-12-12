/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:10:50 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/12 12:40:44 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string _name;
	
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
		virtual ~DiamondTrap();
		
		DiamondTrap& operator=(const DiamondTrap& other);
		
		virtual void	attack(const std::string& target);
		void			whoAmI(void);
};

#endif


/* 	    ClapTrap
        /      \
   FragTrap   ScavTrap
        \      /
      DiamondTrap
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:35:26 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/26 21:29:42 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter {
	private:
		std::string	_name;
		AMateria* 	_inventory[4];
	
	public:
		Character();
		Character(std::string& name);
		Character(const Character& other);
		~Character();
		
		Character& operator=(const Character& rhs);

		virtual std::string const&	getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		
};

#endif
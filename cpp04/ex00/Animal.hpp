/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:16:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/12 17:47:10 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL

# include <iostream>

class Animal {
	protected:
		std::string	_type;
	
	public:
		Animal();
		Animal(const Animal& other);
		~Animal();

		Animal& operator=(const Animal& other);
		
		std::string&	getType(void) const;
		
		virtual void	makeSound(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:16:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:39:55 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {
	protected:
		std::string	_type;
	
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& other);
		virtual ~Animal();

		Animal& operator=(const Animal& other);
		
		const std::string&	getType(void) const;
		
		virtual void	makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:20:04 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:35:12 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();

		Dog& operator=(const Dog& other);
	
		virtual void	makeSound(void) const;
};

#endif

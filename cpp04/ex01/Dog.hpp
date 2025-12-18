/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:20:04 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/18 13:27:18 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain*	_brain;
	
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();

		Dog& operator=(const Dog& other);

		void				setIdea(int index, std::string& newIdea);
		const std::string	getIdea(int index) const;
		const Brain*		getBrainAddress() const;
	
		virtual void	makeSound(void) const;
};

#endif

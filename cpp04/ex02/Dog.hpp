/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:20:04 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/23 18:00:44 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal {
	private:
		Brain*	_brain;
	
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();

		Dog& operator=(const Dog& other);

		void				setIdea(int index, const std::string& newIdea);
		const std::string	getIdea(int index) const;
		void				showBrainAddress() const;
	
		virtual void	makeSound(void) const;
};

#endif

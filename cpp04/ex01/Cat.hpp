/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:19:59 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 14:58:39 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain*	_brain;
	
	public:
		Cat();
		Cat(const Cat& other);
		~Cat();

		Cat& operator=(const Cat& other);
		
		virtual void	makeSound(void) const;
};

#endif

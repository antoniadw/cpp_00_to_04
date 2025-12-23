/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:16:55 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/23 17:58:21 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class AAnimal {
	protected:
		std::string	_type;
	
	public:
		AAnimal();
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);
		virtual ~AAnimal();

		AAnimal& operator=(const AAnimal& other);
		
		const std::string&	getType(void) const;
		
		virtual void	makeSound(void) const = 0;
};

#endif

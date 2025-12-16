/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:30:46 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:21:00 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGNIMAL_H
# define WRONGNIMAL_H

# include <iostream>


class WrongAnimal {
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& other);

		const std::string&	getType(void) const;
		
		void	makeSound(void) const;
};

#endif

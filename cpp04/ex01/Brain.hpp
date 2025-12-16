/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:55:09 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 15:07:46 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(const Brain& other);
		~Brain();
		
		const Brain& operator=(const Brain& rhs);
};

#endif
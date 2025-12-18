/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:55:09 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/18 13:26:55 by ade-woel         ###   ########.fr       */
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
		
		Brain& operator=(const Brain& rhs);

		void				setIdea(int index, std::string& newIdea);
		const std::string	getIdea(int index) const;
};

#endif
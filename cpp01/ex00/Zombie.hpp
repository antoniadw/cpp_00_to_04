/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:39:42 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/27 16:18:42 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private:
		std::string	_name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		
		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
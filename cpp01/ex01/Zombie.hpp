/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:49:30 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 17:39:18 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();

		void	set_Name(std::string input);
		void	announce(void) const;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
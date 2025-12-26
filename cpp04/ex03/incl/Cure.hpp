/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:04:45 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/26 16:56:27 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure& other);
		~Cure();

		Cure& operator=(const Cure& rhs);
		
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif

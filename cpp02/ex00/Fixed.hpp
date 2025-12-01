/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:12 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/01 16:18:12 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private:
		int					_fixedValue;
		static const int	_fracBits;
	
	public:
		Fixed(void);							//default constructor
		Fixed(Fixed const& cpy);				//copy constructor
		~Fixed(void);							//default destructor

		Fixed&	operator=(Fixed const& rhs);	//copy assignment operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif

/*
Forme canonique = regle de conception.
Quand tu crées un objet, C++ doit savoir :

Comment le créer (constructeur par défaut)
Comment le copier (constructeur de copie)
Comment l'assigner (opérateur =)
Comment le détruire (destructeur)
*/
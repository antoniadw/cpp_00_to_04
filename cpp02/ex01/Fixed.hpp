/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:12 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/05 12:39:04 by ade-woel         ###   ########.fr       */
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
		Fixed(void);
		Fixed(int const	value);
		Fixed(float const number);
		Fixed(Fixed const& cpy);
		~Fixed(void);

		Fixed&	operator=(Fixed const& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& other);

#endif

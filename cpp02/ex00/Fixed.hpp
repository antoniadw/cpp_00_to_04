/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:12 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/05 12:30:34 by ade-woel         ###   ########.fr       */
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
		Fixed(Fixed const& cpy);
		~Fixed(void);

		Fixed&	operator=(Fixed const& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif

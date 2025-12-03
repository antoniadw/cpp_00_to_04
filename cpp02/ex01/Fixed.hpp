/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:12 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/03 18:29:47 by ade-woel         ###   ########.fr       */
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
		Fixed(int const	value);
		Fixed(float const number);
		Fixed(Fixed const& cpy);				//copy constructor
		~Fixed(void);							//default destructor

		Fixed&	operator=(Fixed const& rhs);	//copy assignment operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:14 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/05 12:45:44 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main (void) {
	{
		Fixed		a;
		Fixed const	b(10);
		Fixed const	c(42.42f);
		Fixed const	d(b);
		
		a = Fixed(1234.4321f);
	
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
	
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	{
		Fixed e(19.19f);
		std::cout << std::endl;
		std::cout << "e is " << e.getRawBits() << " as a fixed value" << std::endl;
		std::cout << "e is " << e.toFloat() << " as a float" << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:32:14 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/04 18:07:21 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main (void) {
	{
		std::cout << "----- MODULE MAIN TESTS -----" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;	
		std::cout << std::endl;
	}
	{
		std::cout << "----- PLAYGROUND -----" << std::endl;
		std::cout << std::endl;
		std::cout << "[COMPARISON OPERATORS]\n";
		Fixed a(10), b(20), c(10);
		std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << std::endl;
		
		std::cout << "a > b  : " << (a > b ? "true" : "false") << std::endl;
		std::cout << "a < b  : " << (a < b ? "true" : "false") << std::endl;
		std::cout << "a >= c : " << (a >= c ? "true" : "false") << std::endl;
		std::cout << "a <= b : " << (a <= b ? "true" : "false") << std::endl;
		std::cout << "a == c : " << (a == c ? "true" : "false") << std::endl;
		std::cout << "a != b : " << (a != b ? "true" : "false") << std::endl;
		
	}
	{
		std::cout << std::endl;
		std::cout << "[ARITHMETIC OPERATORS]\n";
		Fixed d(10.5f), e(2.5f);
		std::cout << "d = " << d << ", e = " << e << std::endl;
		std::cout << std::endl;
		
		std::cout << "d + e = " << (d + e) << std::endl;
		std::cout << "d - e = " << (d - e) << std::endl;
		std::cout << "d * e = " << (d * e) << std::endl;
		std::cout << "d / e = " << (d / e) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "[PRE-INCREMENT]\n";
		Fixed f(0);
		std::cout << "Start value: " << f << std::endl;
		std::cout << "++f return value: " << ++f << std::endl;
		std::cout << "Value now: " << f << std::endl;
		std::cout << "++f one more time: " << ++f << std::endl;
		std::cout << "Value now: " << f << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "[PRE-DECREMENT]\n";
		Fixed g(0);
		std::cout << "Start value: " << g << std::endl;
		std::cout << "--g return value: " << --g << std::endl;
		std::cout << "Value now: " << g << std::endl;
		std::cout << "--g one more time: " << --g << std::endl;
		std::cout << "Value now: " << g << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "[POST-INCREMENT]\n";
		Fixed h(0);
		std::cout << "Start value: " << h << std::endl;
		std::cout << "h++ return value: " << h++ << std::endl;
		std::cout << "Value now: " << h << std::endl;
		std::cout << "h++ one more time: " << h++ << std::endl;
		std::cout << "Value now: " << h << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "[POST-DECREMENT]\n";
		Fixed i(0);
		std::cout << "Start value: " << i << std::endl;
		std::cout << "i-- return value: " << i-- << std::endl;
		std::cout << "Value now: " << i << std::endl;
		std::cout << "i-- one more time: " << i-- << std::endl;
		std::cout << "Value now: " << i << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "[MIN FUNCTION - NO CONST]\n";
	    Fixed j(5), k(10);
		std::cout << "j = " << j << ", k = " << k << std::endl;
		std::cout << "Fixed::min(j, k) = " << Fixed::min(j, k) << std::endl;
		//Returned ref can be modified
		Fixed::min(j, k) = Fixed(999);
		std::cout << "After Fixed::min(j, k) = Fixed(999):" << std::endl;
		std::cout << "j = " << j << " (min modified)" << std::endl;
		std::cout << "k = " << k << " (untouched)" << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "[MIN FUNCTION - WITH CONST]\n";
		const Fixed l(5), m(10);
    
		std::cout << "l = " << l << ", m = " << m << std::endl;
		std::cout << "Fixed::min(l, m) = " << Fixed::min(l, m) << std::endl;
		//The next line will not compile
		//Fixed::min(l, m) = Fixed(999);
	}
	{
		std::cout << std::endl;
		std::cout << "[MAX FUNCTION - NO CONST]\n";
		Fixed n(5),o(10);
		std::cout << "n = " << n << ", o = " << o << std::endl;
		std::cout << "Fixed::max(n, o) = " << Fixed::max(n, o) << std::endl;
		//Returned ref can be modified
		Fixed::max(n, o) = Fixed(666);
		std::cout << "Après Fixed::max(n, o) = Fixed(666):" << std::endl;
		std::cout << "n = " << n << " (untouched)" << std::endl;
		std::cout << "o = " << o << " (max modified)" << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "[MAX FUNCTION - WITH CONST]\n";
		const Fixed p(5), q(10);    
		std::cout << "p = " << p << ", q = " << q << std::endl;
		std::cout << "Fixed::max(p, q) = " << Fixed::max(p, q) << std::endl;
		//The next line will not compile
		//Fixed::max(p, q) = Fixed(666);
	}
	return (0);
}

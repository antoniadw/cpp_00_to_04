/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:23:48 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/14 19:46:53 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "--- MEMORY ADDRESSES OVERVIEW ---" << std::endl;
	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;

		std::cout << "--- VALUES OVERVIEW ---" << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
	
	return (0);
}

/* A reference is defined as an alias to an existing variable 
				OR

*/

/* Une reference = un alias vers une variable existante */
/* Une reference = un pointeur qui est constant, toujours dereference et jamais NULL */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:21:43 by ade-woel          #+#    #+#             */
/*   Updated: 2025/10/27 17:59:20 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(char *str)
{
	int	i = -1;

	while (str[++i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		std::cout << str[i];
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			to_upper(argv[i]);
		std::cout << std::endl;
	}
	return (0);	
}

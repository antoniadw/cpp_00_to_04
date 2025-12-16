/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:16:58 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/16 12:54:41 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void)
{
	{
		std::cout << "--- OBJECTS CONTRUCTION --- " << std::endl;
		std::cout << std::endl;

		std::cout << "Animal case: " << std::endl;
		const Animal*	meta = new Animal();
		std::cout << std::endl;
		std::cout << "Dog case: " << std::endl;
		const Animal*	j = new Dog();
		std::cout << std::endl;
		std::cout << "Cat case: " << std::endl;
		const Animal*	i = new Cat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		j->makeSound();
		i->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		std::cout << "--- OBJECTS DESTRUCTION --- " << std::endl;
		std::cout << "Animal case: " << std::endl;
		delete meta;
		std::cout << std::endl;
		std::cout << "Dog case: " << std::endl;
		delete j;
		std::cout << std::endl;
		std::cout << "Cat case: " << std::endl;
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << "--- WRONG EXAMPLE ---" << std::endl;
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
	}
	
	return (0);
}

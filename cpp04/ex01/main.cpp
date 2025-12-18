/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:53:34 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/18 13:27:49 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main (void) 
{
	{
		/* MAIN FROM SUBJECT PDF */
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << std::endl; 
		
		delete j;
		delete i;
	}
	// {
	// 	/* TESTING DEEP COPIES */
	// 	Dog*	one = new Dog();
	// 	std::string	idea = "a brilliant idea";
	// 	std::string otherIdea = "i love treats";
	// 	std::string lastIdea = "i am a good boy";
	// 	std::cout << std::endl;
		
	// 	one->setIdea(0, idea);
	// 	std::cout << "First idea in dog one is: " << one->getIdea(0) << std::endl;
	// 	std::cout << "Dog one brain is located at: " << one->getBrainAddress() << std::endl;
	// 	std::cout << std::endl;

	// 	Dog	two(*one);
	// 	std::cout << "Dog two brain is located at: " << two.getBrainAddress() << std::endl;
	// 	std::cout << std::endl;
		
	// 	Dog	three;
	// 	std::cout << "Dog three brain is located at: " << three.getBrainAddress() << std::endl;
	// 	three = two;
	// 	std::cout << "Dog three brain is located at: " << three.getBrainAddress() << std::endl;
	// 	std::cout << std::endl;

	// 	std::cout << "... modifying second dog's idea ..." << std::endl;
	// 	two.setIdea(0, otherIdea);
	// 	std::cout << "... modifying third dog's idea ..." << std::endl;
	// 	three.setIdea(0, lastIdea);
	// 	std::cout << std::endl;
		
	// 	std::cout << "First idea in dog one is: " << one->getIdea(0) << std::endl;
	// 	std::cout << "First idea in dog two is: " << two.getIdea(0) << std::endl;
	// 	std::cout << "First idea in dog three is: " << three.getIdea(0) << std::endl;
	// 	std::cout << std::endl;
		
	// 	std::cout << " --- PRINTING BRAINS ADDRESSES --- " << std::endl;
	// 	std::cout << "Dog one brain is located at: " << one->getBrainAddress() << std::endl;
	// 	std::cout << "Dog two brain is located at: " << two.getBrainAddress() << std::endl;
	// 	std::cout << "Dog three brain is located at: " << three.getBrainAddress() << std::endl;
	// 	std::cout << std::endl;

	// 	delete one;
	// }
	// {
	// 	/* TESTING THE ANIMAL ARRAY */
	// 	Animal*	array[6];

	// 	std::cout << "--- ARRAY CONTRUCTION --- " << std::endl;
	// 	for (int i = 0; i < 3; i++) {
	// 		std::cout << "INSTANCE #" << i << std::endl;
	// 		array[i] = new Dog();
	// 		std::cout << std::endl;
	// 	}
	// 	for (int i = 3; i < 6; i++) {
	// 		std::cout << "INSTANCE #" << i << std::endl;
	// 		array[i] = new Cat();
	// 		std::cout << std::endl;
	// 	}
	// 	std::cout << std::endl;

	// 	std::cout << "--- ARRAY DESTRUCTION --- " << std::endl;
	// 	for (int i = 0; i < 6; i++) {
	// 		std::cout << "INSTANCE #" << i << std::endl;	
	// 		delete array[i];
	// 		std::cout << std::endl;
	// 	}
	// }

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:35:05 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/30 12:43:38 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../incl/AMateria.hpp"
#include "../incl/Character.hpp"
#include "../incl/Cure.hpp"
#include "../incl/Ice.hpp"
#include "../incl/ICharacter.hpp"
#include "../incl/IMateriaSource.hpp"
#include "../incl/MateriaSource.hpp"

int main()
{
	{
		/* Main from subject */
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	// {
	// 	std::cout << std::endl;
	// 	std::cout << "--- Testing type integrity ---" << std::endl;
		
	// 	AMateria* ice1 = new Ice();
	// 	AMateria* cure1 = new Cure();

	// 	std::cout << "ice1 type before = " << ice1->getType() << std::endl;
	// 	std::cout << "cure1 type before = " << cure1->getType() << std::endl;
	// 	std::cout << std::endl;

	// 	*ice1 = *cure1;

	// 	std::cout << "ice1 type after = " << ice1->getType() << std::endl;
	// 	std::cout << "cure1 type after = " << cure1->getType() << std::endl;

	// 	delete ice1;
	// 	delete cure1;
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << "--- Testing deep copies ---" << std::endl;
	// 	Character* hero = new Character("Hero");
	// 	hero->equip(new Ice());
   	// 	hero->equip(new Cure());
	// 	std::cout << std::endl;
	
   	// 	std::cout << "* BEFORE COPY *" << std::endl;
	// 	hero->use(0, *hero);
	// 	std::cout << std::endl;
	
	// 	Character* copy = new Character(*hero);
	
	// 	std::cout << "* AFTER COPY *" << std::endl;
	// 	copy->use(0, *copy);
	// 	std::cout << std::endl;

	// 	delete hero;
	// 	std::cout << "... Hero destroyed ..." << std::endl;
	// 	std::cout << std::endl;
		
	// 	copy->use(0, *copy);
	// 	copy->use(1, *copy);
	
	// 	delete copy;
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << "--- Testing edge cases ---" << std::endl; //activate debug messages for more clarity
	// 	Character Jon;

	// 	Jon.unequip(0); //does nothinh because inventory is empty
	// 	Jon.use(0, Jon); 
	// 	Jon.use(-3, Jon); //invalid index

	// 	Jon.equip(new Ice());
	// 	Jon.use(0, Jon);
	// 	Jon.equip(new Ice());
	// 	Jon.equip(new Ice());
	// 	Jon.equip(new Ice());

	// 	AMateria* fifth = new Ice(); //max inventory size is 4
	// 	Jon.equip(fifth);
	// 	AMateria* dropped = Jon.getMatAddress(0);
	// 	Jon.unequip(0);

	// 	delete dropped;
	// 	delete fifth;
	// }
	return 0;
}
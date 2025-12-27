/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:14:38 by ade-woel          #+#    #+#             */
/*   Updated: 2025/12/27 18:13:45 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/MateriaSource.hpp"

// === Constructors & Destructor =============================================

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++){
		if (other._learned[i])
			_learned[i] = other._learned[i]->clone();
		else
			_learned[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (_learned[i]) {
			delete _learned[i];
			_learned[i] = NULL;
		}
	}
}


// === Operators =============================================================

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			delete _learned[i];
			if (rhs._learned[i] != NULL)
				this->_learned[i] = rhs._learned[i]->clone();
			else
				this->_learned[i] = NULL;
		}
	}
	return (*this);
}


// === Public Methods ========================================================

void	MateriaSource::learnMateria(AMateria* m) {
	if (m == NULL)
		return ;
	else {
		for (int i = 0; i < 4; i++) {
			if (_learned[i] == NULL) {
				_learned[i] = m->clone();
				return ;
			}
		}
		std::cout << "Could not learn Materia because slots are full" << std::endl;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 3; i >= 0; i--) {
		if (_learned[i] != NULL && _learned[i]->getType() == type)
			return (_learned[i]->clone());
	}
	std::cout << "Could not create new Materia" << std::endl;
	return (NULL);
}

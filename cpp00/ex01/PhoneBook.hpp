/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:16:36 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/08 15:42:51 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);

	void		addContact();
	void		searchContact() const;
	std::string	fieldFill(std::string fieldId);

private:
	int			_nextIndex;
	int			_totalContacts;
	Contact		_contacts[3];
	//std::string	_trimString(std::string str, int len);
	
};

#endif

/*
addContact()
- Demande les infos à l'utilisateur
- Crée un nouveau Contact
- L'ajoute au tableau à la position nextIndex
- Met à jour totalContacts et nextIndex

searchContacts()
- Affiche la liste des contacts
- Demande un index à l'utilisateur
- Affiche les détails du contact sélectionné

displayAllContacts()
- Affiche le tableau formaté de tous les contacts

#### D) Méthodes privées (helpers)

truncateString(std::string str, size_t width)
- Coupe une chaîne à `width` caractères
- Ajoute un `.` si tronquée
- Retourne la chaîne formatée

displayContact(int index)
- Affiche tous les détails d'UN contact
- Utilisé par searchContacts()

isValidIndex(int index)
- Vérifie si l'index est valide (0 à totalContacts-1)
- Retourne true/false

---

*/
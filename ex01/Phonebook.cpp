/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/25 18:26:27 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
	:d_count(0), has_contacts(false)
{
	std::cout << "Options : ADD\tSEARCH\tEXIT" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
{
	this->d_contacts[this->d_count].setFirstname();
	this->d_contacts[this->d_count].setLastname();
	this->d_contacts[this->d_count].setNickname();
	this->d_contacts[this->d_count].setPhone();
	this->d_contacts[this->d_count].setSecret();
	if (this->d_count == 7)
		this->d_count = 0;
	else
		this->d_count++;
	this->has_contacts = true;
}

void	PhoneBook::private_displayTable(void)
{
	int	x = 0;

	// FAIRE LE TABLEAU DEMANDÉ !
	/*
	 * SEARCH : affiche le contact demandé
◦ Affiche les contacts enregistrés sous la forme d’une liste de 4 colonnes : index,
first name, last name et nickname.
◦ Chaque colonne doit faire 10 caractères de long. Elles doivent être séparées
par un pipe (’|’). Leur texte est aligné à droite. Si le texte dépasse la largeur
de la colonne, il faut le tronquer et remplacer le dernier caractère affiché par
un point (’.’).
◦ Ensuite, le programme demande à l’utilisateur d’entrer l’index du contact à af-
ficher. Si l’index ou son format sont incorrects, gérez cela de manière pertinente.
Sinon, affichez les informations du contact, une par ligne.
	*/
	while (x < 8)
	{
		if (this->d_contacts[x].getFirstname() == "")
			break ;
		std::cout << "FIRST NAME === " << this->d_contacts[x].getFirstname() << std::endl;
		std::cout << "LAST NAME === " << this->d_contacts[x].getLastname() << std::endl;
		std::cout << "NICKNAME === " << this->d_contacts[x].getNickname() << std::endl;
		std::cout << "PHONE === " << this->d_contacts[x].getPhone() << std::endl;
		std::cout << "DARK SECRET === " << this->d_contacts[x].getSecret() << std::endl;
		x++;
	}
}

void	PhoneBook::private_displayContactDetails(void)
{

}
void	PhoneBook::displayContact(void)
{
	if (this->has_contacts == false)
		std::cout << "You haven't registered any contacts yet." << std::endl;
	else
	{
		this->private_displayTable();
		this->private_displayContactDetails();
	}
}

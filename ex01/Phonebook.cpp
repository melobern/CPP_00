/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/26 20:00:05 by mbernard         ###   ########.fr       */
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

void	Phonebook::private_searchContact(int index)
{
/*
 * Ensuite, le programme demande à l’utilisateur d’entrer l’index du contact à af-
 * ficher. Si l’index ou son format sont incorrects, gérez cela de manière pertinente.
 * Sinon, affichez les informations du contact, une par ligne.
*/
	std::string	input;
	int		chosen_index;
	size_t		input_len = 0;

	while (true)
	{
		std::cout << "Chose the number of the contact to show :";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl << "Reached the End-of-File (Ctrl + D). Exiting..." << std::endl;
			break ;
		}
		input_len = input.lenght();
		if (input_len != 1)
			std::cout << "Please enter a number between 1 and " << index + 1;
		if (!is_full_digits(input))
			continue;
		else
			break ;
	}
	index_chosen = std::
}

void	PhoneBook::private_displayTable(void)
{
	int		index = 0;
	/*
	 * SEARCH : affiche le contact demandé
◦ Affiche les contacts enregistrés sous la forme d’une liste de 4 colonnes : index,
first name, last name et nickname.
◦ Chaque colonne doit faire 10 caractères de long. Elles doivent être séparées
par un pipe (’|’). Leur texte est aligné à droite. Si le texte dépasse la largeur
de la colonne, il faut le tronquer et remplacer le dernier caractère affiché par
un point (’.’).
	*/
	while (index < 8)
	{
		if (this->d_contacts[index].getFirstname() == "")
			break ;
		std::cout << "|" << index + 1;
		std::cout << "|" << this->d_contacts[index].getFirstname();
		std::cout << "|" << this->d_contacts[index].getLastname();
		std::cout << "|" << this->d_contacts[index].getNickname() << "|" << std::endl;
//		std::cout << "PHONE === " << this->d_contacts[x].getPhone() << std::endl;
//		std::cout << "DARK SECRET === " << this->d_contacts[x].getSecret() << std::endl;
		index++;
	}
	this->private_searchContact(index);
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

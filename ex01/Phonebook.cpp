/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/26 22:46:35 by mbernard         ###   ########.fr       */
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

void	PhoneBook::private_displayContact(int index)
{
		std::cout << "First Name \t:\t" << this->d_contacts[index].getFirstname() << std::endl;
		std::cout << "Last Name \t:\t" << this->d_contacts[index].getLastname() << std::endl;
		std::cout << "Nickname \t:\t" << this->d_contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number \t:\t" << this->d_contacts[index].getPhone() << std::endl;
		std::cout << "Darkest Secret \t:\t" << this->d_contacts[index].getSecret() << std::endl;
}

void	PhoneBook::private_searchContact(int index)
{
	std::string	input;
	int		index_chosen;

	std::cout << "Chose the number of the contact to show :";
	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl << "Reached the End-of-File (Ctrl + D). Exiting..." << std::endl;
			exit(0);
		}
		if (input.length() != 1 || !std::isdigit(input[0]) || input == "0")
		{
			std::cout << "Please enter a number between 1 and " << index << " ";
			continue;
		}
		index_chosen = input[0] - '0';
		if (index_chosen > index)
			std::cout << "Please enter a number between 1 and " << index << " ";
		else
		{
			this->private_displayContact(index_chosen - 1);
			break ;
		}
	}
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
		index++;
	}
	this->private_searchContact(index);
}

void	PhoneBook::searchContact(void)
{
	if (this->has_contacts == false)
		std::cout << "You haven't registered any contacts yet." << std::endl;
	else
		this->private_displayTable();
}

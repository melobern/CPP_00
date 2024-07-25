/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/25 16:39:10 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
	:d_count(0)
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
	if (this->d_count == 7)
		this->d_count = 0;
	else
		this->d_count++;
	this->d_contacts[this->d_count].setFirstname();
	this->d_contacts[this->d_count].setLastname();
	this->d_contacts[this->d_count].setNickname();
	this->d_contacts[this->d_count].setPhone();
	this->d_contacts[this->d_count].setSecret();
	std::cout << "FIRST NAME === " << this->d_contacts[this->d_count].getFirstname() << std::endl;
	std::cout << "LAST NAME === " << this->d_contacts[this->d_count].getLastname() << std::endl;
	std::cout << "NICKNAME === " << this->d_contacts[this->d_count].getNickname() << std::endl;
	std::cout << "PHONE === " << this->d_contacts[this->d_count].getPhone() << std::endl;
	std::cout << "DARK SECRET === " << this->d_contacts[this->d_count].getSecret() << std::endl;
}

void	PhoneBook::private_displayTable(void)
{
}

void	PhoneBook::private_displayContactDetails(void)
{

}
void	PhoneBook::displayContact(void)
{
	if (this->d_count == 0)
		std::cout << "You haven't registered any contacts yet." << std::endl;
	else
	{
		this->private_displayTable();
		this->private_displayContactDetails();
	}
}

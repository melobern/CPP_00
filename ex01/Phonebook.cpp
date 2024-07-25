/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/25 15:32:29 by mbernard         ###   ########.fr       */
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
	if (this->d_count == 8)
		this->d_count = 1;
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

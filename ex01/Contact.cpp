/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/25 15:22:37 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*	CONSTRUCTOR && DESTRUCTOR	*/

Contact::Contact(void)
	: m_firstname(""), m_lastname(""), m_nickname(""), m_phone(""), m_secret("")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

/*	GETTERS				*/

std::string	Contact::getFirstname(void) const
{
	return (this->m_firstname);
}
std::string	Contact::getLastname(void) const
{
	return (this->m_lastname);
}

std::string	Contact::getNickname(void) const
{
	return (this->m_nickname);
}

std::string	Contact::getPhone(void) const
{
	return (this->m_phone);
}
std::string	Contact::getSecret(void) const
{
	return (this->m_secret);
}

/*	SETTERS				*/

void	Contact::setFirstname(void)
{

}
void	Contact::setLastname(void)
{

}
void	Contact::setNickname(void)
{

}
void	Contact::setPhone(void)
{

}
void	Contact::setSecret(void)
{

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/25 14:00:26 by mbernard         ###   ########.fr       */
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
void	Contact::getFirstname(void)
{
	return (this->m_firstname);
}
void	Contact::getLastname(void)
{
	return (this->m_lastname);
}

void	Contact::getNickname(void)
{
	return (this->m_nickname);
}

void	Contact::getPhone(void)
{
	return (this->m_phone);
}
void	Contact::getSecret(void)
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

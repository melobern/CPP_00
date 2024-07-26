/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:43:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/26 21:32:00 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		/*	SETTLERS	*/
		void	setFirstname(void);
		void	setLastname(void);
		void	setNickname(void);
		void	setPhone(void);
		void	setSecret(void);
		/*	GETTERS		*/
		std::string	getFirstname(void) const;
		std::string	getLastname(void) const;
		std::string	getNickname(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;
	private:
		std::string	m_firstname;
		std::string	m_lastname;
		std::string	m_nickname;
		std::string	m_phone;
		std::string	m_secret;
};

#endif

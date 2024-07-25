/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:43:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/25 13:10:25 by mbernard         ###   ########.fr       */
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
		void	getFirstname(void) const;
		void	getLastname(void) const;
		void	getNickname(void) const;
		void	getPhone(void) const;
		void	getSecret(void) const;
	private:
		std::string	m_firstname;
		std::string	m_lastname;
		std::string	m_nickname;
		std::string	m_phone;
		std::string	m_secret;
};

#endif

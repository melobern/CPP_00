/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:43:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/26 19:55:15 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	displayContact(void);
	private:
		Contact d_contacts[8];
		int	d_count;
		bool	has_contacts;
		void	private_searchContact(int index);
		void	private_replaceContact(void);
		void	private_displayTable(void);
		void	private_displayContactDetails(void);
};

#endif

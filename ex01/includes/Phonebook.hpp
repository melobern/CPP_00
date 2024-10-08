/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:43:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/27 19:07:25 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDES_PHONEBOOK_HPP_
#define EX01_INCLUDES_PHONEBOOK_HPP_

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook {
 public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    addContact(void);
        void    searchContact(void);
 private:
        Contact d_contacts[8];
        int    d_count;
        bool    has_contacts;
        void    private_searchContact(int index);
        void    private_displayTable(void);
        void    private_displayContact(int index);
        void    private_displayElement(std::string element);
};

#endif  // EX01_INCLUDES_PHONEBOOK_HPP_

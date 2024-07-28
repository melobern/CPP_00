/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:43:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/28 16:32:51 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDES_CONTACT_HPP_
#define EX01_INCLUDES_CONTACT_HPP_

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contact {
 public:
        Contact(void);
        ~Contact(void);
        /*    SETTLERS    */
        void    setFirstname(void);
        void    setLastname(void);
        void    setNickname(void);
        void    setPhone(void);
        void    setSecret(void);
        /*    GETTERS        */
        std::string    getFirstname(void) const;
        std::string    getLastname(void) const;
        std::string    getNickname(void) const;
        std::string    getPhone(void) const;
        std::string    getSecret(void) const;
 private:
        std::string    m_firstname;
        std::string    m_lastname;
        std::string    m_nickname;
        std::string    m_phone;
        std::string    m_secret;
        bool           is_full_letters(std::string str, std::string label);
        bool           is_full_digits(std::string str);
};

#endif  // EX01_INCLUDES_CONTACT_HPP_

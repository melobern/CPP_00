/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:44:17 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/27 19:45:31 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

/*    CONSTRUCTOR && DESTRUCTOR    */

Contact::Contact(void)
    : m_firstname(""), m_lastname(""), m_nickname(""), m_phone(""), m_secret("") {
    return;
}

Contact::~Contact(void) {
    return;
}

/*    GETTERS                */

std::string    Contact::getFirstname(void) const {
    return (this->m_firstname);
}
std::string    Contact::getLastname(void) const {
    return (this->m_lastname);
}

std::string    Contact::getNickname(void) const {
    return (this->m_nickname);
}

std::string    Contact::getPhone(void) const {
    return (this->m_phone);
}
std::string    Contact::getSecret(void) const {
    return (this->m_secret);
}

/*    STATIC BOOL CHECKERS        */

static bool is_full_digits(std::string str) {
    int    x = 0;

    while (str[x]) {
        if (x > 9) {
            std::cout << "Sorry, the phone number must contains 8 or 10 digits." << std::endl;
            return (0);
        }
        if (!std::isdigit(str[x])) {
            std::cout << "Sorry, this field must contains digits only." << std::endl;
            return (0);
        }
        x++;
    }
    return (1);
}

static bool is_full_letters(std::string str, std::string label) {
    int    x = 0;

    while (str[x]) {
        if (!std::isalpha(str[x]) && !std::isspace(str[x]) && str[x] != '-') {
            std::cout << "Sorry, the " << label << " must contains letters only." << std::endl;
            return (0);
        }
        x++;
    }
    return (1);
}

/*    SETTERS                */

void    Contact::setFirstname(void) {
    std::string    input;

    while (true) {
        std::cout << "Enter first name : ";
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            std::cout << std::endl;
            std::cout << "Reached the End-of-File (Ctrl + D). Exiting...";
            std::cout << std::endl;
            exit(0);
        }
        if (input.empty())
            continue;
        if (!is_full_letters(input, "First Name"))
            continue;
        this->m_firstname = input;
        break;
    }
}

void    Contact::setLastname(void) {
    std::string    input;

    while (true) {
        std::cout << "Enter last name : ";
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            std::cout << std::endl << "Reached the End-of-File (Ctrl + D). Exiting..." << std::endl;
            exit(0);
        }
        if (input.empty())
            continue;
        if (!is_full_letters(input, "Last Name"))
            continue;
        this->m_lastname = input;
        break;
    }
}

void    Contact::setNickname(void) {
    std::string    input;

    while (true) {
        std::cout << "Enter nickname : ";
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            std::cout << std::endl << "Reached the End-of-File (Ctrl + D). Exiting..." << std::endl;
            exit(0);
        }
        if (input.empty())
            continue;
        this->m_nickname = input;
        break;
    }
}

void    Contact::setPhone(void) {
    std::string    input;
    size_t        input_len;

    while (true) {
        std::cout << "Enter phone number : ";
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            std::cout << std::endl << "Reached the End-of-File (Ctrl + D). Exiting..." << std::endl;
            exit(0);
        }
        if (input.empty())
            continue;
        if (!is_full_digits(input))
            continue;
        input_len = input.length();
        if (!(input_len == 8 || input_len == 10)) {
            std::cout << "Sorry, the phone must contains 8 or 10 digits." << std::endl;
            continue;
        }
        this->m_phone = input;
        break;
    }
}

void    Contact::setSecret(void) {
    std::string    input;

    while (true) {
        std::cout << "Enter darkest secret : ";
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            std::cout << std::endl << "Reached the End-of-File (Ctrl + D). Exiting..." << std::endl;
            exit(0);
        }
        if (input.empty())
            continue;
        this->m_secret = input;
        break;
    }
}

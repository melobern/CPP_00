/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:03:25 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/27 19:23:52 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

int    main(void) {
    PhoneBook    phonebook;
    std::string    input;

    while (true) {
        std::cout << "Enter command : ";
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            std::cout << std::endl;
            std::cout << "Reached the End-of-File (Ctrl + D). Exiting...";
            std::cout << std::endl;
            break;
        }
        if (input.empty())
            continue;
        if (input == "ADD") {
            phonebook.addContact();
        } else if (input == "SEARCH") {
            phonebook.searchContact();
        } else if (input == "EXIT") {
            break;
        } else {
            continue;
        }
    }
    return (0);
}


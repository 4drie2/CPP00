/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 18:29:25 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/08 16:26:48 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook() {
	current_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::run()
{
    std::string	cmd;

    printInstrucions(true);
    while (cmd != "EXIT")
    {
    	std::cout << std::endl << "Enter a command :";
    	std::getline(std::cin, cmd);
    	std::cout << std::endl;
    	if (cmd == "ADD")
    		addContact();
    	else if (cmd == "SEARCH")
    		searchContact();
    	else if (cmd == "EXIT")
    		break ;
    	else
    		printInstrucions(false);
    }
}


void PhoneBook::printInstrucions(bool first_time)
{
	if (first_time)
		std::cout << "Welcome to your phonebook !" << std::endl;
	std::cout << "You can use the following commands :" << std::endl;
	std::cout << "\033[34m" "ADD : Add a new contact" << std::endl;
	std::cout << "\033[32m" "SEARCH : Search for a contact" << std::endl;
	std::cout << "\033[31m" "EXIT : Exit the program" "\033[0m" << std::endl;
}

int PhoneBook::getCurrentIndex() const
{
	return (current_index);
}
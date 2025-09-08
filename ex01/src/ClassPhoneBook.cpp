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

void PhoneBook::searchContact()
{
	std::string wanted_guy;

	std::cout << "\033[32m" "Enter the index of the contact you want to see :" << std::endl;
	std::cin >> wanted_guy;
	if (wanted_guy == "Brayan")
		std::cout << "Brayan is in the kitchen !" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].GetName() == wanted_guy)
		{
			std::cout << "index :" << i << "\nname :" << contacts[i].GetName() << "\nphone number :" << contacts[i].GetPhoneNumber() << std::endl;
			break;
		}
		else if (i == 7)
			std::cout << "\033[31m" "Contact not found :(" "\033[0m" << std::endl;
	}
	std::cout << "\033[0m";
}

void PhoneBook::run()
{
    std::string	cmd;

    printInstrucions(true);
    while (cmd != "EXIT")
    {
    	std::cout << std::endl << "Enter a command :";
    	std::cin >> cmd;
    	std::cout << std::endl;
    	if (cmd == "ADD")
    		addContact();
    	else if (cmd == "SEARCH")
    		searchContact();
		else if (cmd == "PRINTALL")
		{
			for (int i = 0; i < 8; i++)
			{
				std::cout << "index :" << i << "\nname :" << contacts[i].GetName() << "\nphone number :" << contacts[i].GetPhoneNumber() << std::endl;
				std::cout << "------------------------" << std::endl;
			}
		}
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

int const PhoneBook::getCurrentIndex() const
{
	return (current_index);
}

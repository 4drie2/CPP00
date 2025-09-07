/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 18:29:25 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/07 18:29:25 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook()
    : current_index(0)
{}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
	std::string name;
	int			phone_number;

	std::cout << "\033[34m" "Enter the name of the contact :" << std::endl;
	std::cin >> name;
	contacts[current_index].SetName(name);
	std::cout << "Enter the phone number of the contact :" << std::endl;
	std::cin >> phone_number;
	std::cout << "\033[0m";
	contacts[current_index].SetPhoneNumber(phone_number);
	current_index = (current_index + 1) % 8;
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
	current_index = (current_index + 1) % 8;
}

void PhoneBook::run()
{
    std::string	cdm;

    printInstrucions(true);
    while (cdm != "EXIT")
    {
    	std::cout << std::endl << "Enter a command :";
    	std::cin >> cdm;
    	std::cout << std::endl;
    	if (cdm == "ADD")
    		addContact();
    	else if (cdm == "SEARCH")
    		searchContact();
    	else if (cdm == "EXIT")
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
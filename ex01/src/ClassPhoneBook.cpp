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

PhoneBook::addContact()
{
	std::string name;
	int			phone_number;

	std::cout << "\033[34m" "Enter the name of the contact :" << std::endl;
	std::cin >> name;
	phonebook[*current_index].SetName(name);
	std::cout << "Enter the phone number of the contact :" << std::endl;
	std::cin >> phone_number;
	std::cout << "\033[0m";
	phonebook[*current_index].SetPhoneNumber(phone_number);
	*current_index = (*current_index + 1) % 8;
}

PhoneBook::searchContact() const
{
	std::string wanted_guy;

	std::cout << "\033[32m" "Enter the index of the contact you want to see :" << std::endl;
	std::cin >> wanted_guy;
	if (wanted_guy == "Brayan")
		std::cout << "Brayan is in the kitchen !" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (phonebook[i].GetName() == wanted_guy)
		{
			std::cout << "index :" << i << "\nname :" << phonebook[i].GetName() << "\nphone number :" << phonebook[i].GetPhoneNumber() << std::endl;
			break;
		}
		else if (i == 7)
			std::cout << "\033[031" "Contact not found :(" "\033[0m" << std::endl;
	}
	std::cout << "\033[0m";
	*current_index = (*current_index + 1) % 8;
}

PhoneBook::run()
{
	int	        current_index = 0;
    std::string	cdm;

    instrucions(true);
    while (cdm != "EXIT")
    {
    	std::cout << std::endl << "Enter a command :";
    	std::cin >> cdm;
    	std::cout << std::endl;
    	if (cdm == "ADD")
    		add(phonebook, &current_index);
    	else if (cdm == "SEARCH")
    		search(phonebook, &current_index);
    	else if (cdm == "EXIT")
    		break ;
    	else
    		instrucions(false);
    }
}
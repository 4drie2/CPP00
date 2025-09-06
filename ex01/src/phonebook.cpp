/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:48:21 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/06 21:35:38 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

static void instrucions(bool first_time)
{
	if (first_time)
		std::cout << "Welcome to your phonebook !" << std::endl;
	std::cout << "You can use the following commands :" << std::endl;
	std::cout << "\033[34m" "ADD : Add a new contact" << std::endl;
	std::cout << "\033[32m" "SEARCH : Search for a contact" << std::endl;
	std::cout << "\033[31m" "EXIT : Exit the program" "\033[0m" << std::endl;
}

static void add(contact *phonebook, int *current_index)
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

static void search(contact *phonebook, int *current_index)
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

int	main(void)
{
	contact		phonebook[8];
	std::string	cdm;
	int			current_index = 0;

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
	std::cout << "\033[035" "Goodbye !" "\033[0m" << std::endl;

	return (0);
}

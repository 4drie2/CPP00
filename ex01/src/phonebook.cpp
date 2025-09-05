/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:48:21 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/05 20:35:26 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

static void instrucions(bool first_time)
{
	if (first_time)
		std::cout << "Welcome to your phonebook !" << std::endl;
	std::cout << "You can use the following commands :" << std::endl;
	std::cout << "ADD : Add a new contact" << std::endl;
	std::cout << "SEARCH : Search for a contact" << std::endl;
	std::cout << "EXIT : Exit the program" << std::endl;
}

static void add(contact *phonebook, int *current_index)
{
	std::string name;
	int			phone_number;

	std::cout << "Enter the name of the contact :" << std::endl;
	std::cin >> name;
	phonebook[*current_index].SetName(name);
	std::cout << "Enter the phone number of the contact :" << std::endl;
	std::cin >> phone_number;
	phonebook[*current_index].SetPhoneNumber(phone_number);
	*current_index = (*current_index + 1) % 8;
}

static void search(contact *phonebook, int *current_index)
{
	std::string wanted_guy;

	std::cout << "Enter the index of the contact you want to see :" << std::endl;
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
			std::cout << "Contact not found :(" << std::endl;
	}
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

	return (0);
}

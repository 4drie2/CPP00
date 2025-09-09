/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBookADD.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:20:11 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/08 17:04:04 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

static void PrintEmptyFieldError(const std::string &field_name)
{
	std::cout << "\033[31m" << field_name << " cannot be empty" "\033[0m" << std::endl;
}

static void NewFirstName(Contact &contacts)
{
	std::string name;

	while (name.empty())
	{
		std::cout << "\033[34m" "Enter the first name of the contact :";
		std::getline(std::cin, name);
		if (name.empty())
			PrintEmptyFieldError("first name");
	}
	contacts.SetFirstName(name);
}

static void NewLastName(Contact &contacts)
{
	std::string name;
	while (name.empty())
	{
		std::cout << "\033[34m" "Enter the last name of the contact :";
		std::getline(std::cin, name);
		if (name.empty())
			PrintEmptyFieldError("last name");
	}
	contacts.SetLastName(name);
}

static void NewNickname(Contact &contacts)
{
	std::string name;
	while (name.empty())
	{
		std::cout << "\033[34m" "Enter the nickname of the contact :";
		std::getline(std::cin, name);
		if (name.empty())
			PrintEmptyFieldError("nickname");
	}
	contacts.SetNickname(name);
}

static void NewPhoneNumber(Contact &contacts)
{
	std::string phone_number;
	while (phone_number.empty() || (phone_number.find_first_not_of("0123456789 ") != std::string::npos))
	{
		std::cout << "\033[34m" "Enter the phone number of the contact : +33 0";
		std::getline(std::cin, phone_number);
		if (phone_number.empty())
			PrintEmptyFieldError("phone number");
		if (phone_number.find_first_not_of("0123456789 ") != std::string::npos)
			std::cout << "\033[31m" "Hmm, I\'m not sure that\'s a phone number." "\033[0m" << std::endl;
	}
	contacts.SetPhoneNumber(phone_number);
}

static void NewDarkestSecret(Contact &contacts)
{
	std::string name;
	while (name.empty())
	{
		std::cout << "\033[34m" "Enter the darkest sercret of the contact :";
		std::getline(std::cin, name);
		if (name.empty())
			PrintEmptyFieldError("Darkest Secret (please tell meeee)");
	}
	contacts.SetDarkestSecret(name);
}

void PhoneBook::addContact()
{
	std::cout << "\033[2J\033[1;1H";
	NewFirstName(contacts[current_index]);
	NewLastName(contacts[current_index]);
	NewNickname(contacts[current_index]);
	NewPhoneNumber(contacts[current_index]);
	NewDarkestSecret(contacts[current_index]);

	std::cout << "\033[2J\033[1;1H";
	std::cout << "\033[32m" "Contact added successfully!" "\033[0m" << std::endl;
	current_index = (current_index + 1) % 8;
}

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

int	main(void)
{
	instrucions(true);
	PhoneBook phonebook;
	phonebook.run();
	std::cout << "\033[035" "Goodbye !" "\033[0m" << std::endl;

	return (0);
}

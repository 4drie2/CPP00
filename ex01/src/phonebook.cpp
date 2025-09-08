/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:48:21 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/08 15:54:36 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"


int	main(void)
{
	PhoneBook phonebook;
	phonebook.run();
	std::cout << "\033[35m" "Goodbye !" "\033[0m" << std::endl;

	return (0);
}

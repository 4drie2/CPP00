/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBookSEARCH.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:07:51 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/09 14:07:51 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

static std::string formatField(const std::string &text)
{
    if (text.length() >= 10)
        return text.substr(0, 9) + ".";
    else
        return std::string(10 - text.length(), ' ') + text;
}

static int WantedGuyIndex(Contact contacts[8])
{
    int wanted_guy;

    std::cout << "\033[34m" "Enter the index of the contact you want to see more details about :" << std::endl;
    while (true)
    {
        std::getline(std::cin, wanted_guy);
        if (std::cin.fail() || wanted_guy < 0 || wanted_guy >= 8 || contacts[wanted_guy].GetFirstName().empty())
            std::cout << "\033[31m" "Invalid index.\n please retry :" "\033[0m" << std::endl;
        else
            break;
        
    }
    return (wanted_guy);
}

static void printContactDetails(const Contact &contact)
{
    std::cout << "\033[34m" "First Name: " << "\033[0m" << contact.GetFirstName() << std::endl;
    std::cout << "\033[34m" "Last Name: " << "\033[0m" << contact.GetLastName() << std::endl;
    std::cout << "\033[34m" "Nickname: " << "\033[0m" << contact.GetNickname() << std::endl;
    std::cout << "\033[34m" "Phone Number: " << "\033[0m" << contact.GetPhoneNumber() << std::endl;
    std::cout << "\033[34m" "Darkest Secret: " << "\033[0m" << contact.GetDarkestSecret() << std::endl;
}

void PhoneBook::searchContact()
{
    if (contacts[0].GetFirstName().empty())
    {
        std::cout << "\033[31m" "The phonebook is empty, please add a contact first." "\033[0m" << std::endl;
        return;
    }
    std::cout << "     Index|First Name| Last Name|  Nickname";
	for (int i = 0; i < 8; i++)
    {
        std::cout << formatField(std::to_string(i)) << "|"
                  << formatField(contacts[i].GetFirstName()) << "|"
                  << formatField(contacts[i].GetLastName()) << "|"
                  << formatField(contacts[i].GetNickname()) << std::endl;
        std::cout << "------------------------" << std::endl;
        if (contacts[i + 1].GetFirstName().empty())
            break;
    }
    printContactDetails(contacts[WantedGuyIndex(contacts)]);
	std::cout << "\033[0m";
}
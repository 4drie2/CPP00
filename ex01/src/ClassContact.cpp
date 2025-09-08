/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:13:54 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/08 16:15:28 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Contact::Contact()
{}

Contact::~Contact()
{
}

const	std::string &Contact::GetFirstName() const
{
	return (FirstName);
}

const	std::string &Contact::GetLastName() const
{
	return (LastName);
}

const	std::string &Contact::GetNickname() const
{
	return (Nickname);
}

const std::string	Contact::GetPhoneNumber() const
{
	return (phone_number);
}

const	std::string &Contact::GetDarkestSecret() const
{
	return (DarkestSecret);
}

void Contact::SetFirstName(const std::string &NewFirstName)
{
	FirstName = NewFirstName;
}

void Contact::SetLastName(const std::string &NewLastName)
{
	LastName = NewLastName;
}

void Contact::SetNickname(const std::string &NewNickname)
{
	Nickname = NewNickname;
}

void Contact::SetPhoneNumber(std::string NewPhoneNumber)
{
	phone_number = NewPhoneNumber;
}

void Contact::SetDarkestSecret(const std::string &NewDarkestSecret)
{
	DarkestSecret = NewDarkestSecret;
}

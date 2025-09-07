/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:13:54 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/05 20:19:39 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Contact::Contact(const std::string &name, int phone_number)
	: name(name)
	, phone_number(phone_number)
{}

Contact::Contact()
{}

Contact::~Contact()
{
}

const	std::string &Contact::GetName() const
{
	return (name);
}

int	Contact::GetPhoneNumber() const
{
	return (phone_number);
}

void Contact::SetName(const std::string &NewName)
{
	name = NewName;
}

void Contact::SetPhoneNumber(int NewPhoneNumber)
{
	phone_number = NewPhoneNumber;
}
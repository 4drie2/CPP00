/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:13:54 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/05 20:00:11 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

contact::contact(const std::string &name, int phone_number)
	: name(name)
	, phone_number(GetPhoneNumber())
{}

contact::~contact()
{
}

const	std::string &contact::GetName() const
{
	return (name);
}

int	contact::GetPhoneNumber() const
{
	return (phone_number);
}

void contact::SetName(const std::string &NewName)
{
	name = NewName;
}

void contact::SetPhoneNumber(int NewPhoneNumber)
{
	phone_number = NewPhoneNumber;
}

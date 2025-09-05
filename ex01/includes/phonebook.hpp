/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:08:52 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/05 19:59:36 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <string>
#include <iostream>

class contact
{
public:
	contact(const std::string &name, int phone_number);
	contact();

	~contact();


	const	std::string &GetName() const;
	int		GetPhoneNumber() const;

	void SetName(const std::string &NewName);
	void SetPhoneNumber(int NewPhoneNumber);

private:
	std::string name;
	int	phone_number;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:08:52 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/08 16:26:33 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <string>
#include <iostream>
#include <limits>

class Contact {
public:
	Contact();
	~Contact();


	void SetFirstName(const std::string &NewName);
	void SetLastName(const std::string &NewName);
	void SetNickname(const std::string &NewName);
	void SetPhoneNumber(std::string NewPhoneNumber);
	void SetDarkestSecret(const std::string &NewName);


	const std::string &GetFirstName() const;
	const std::string &GetLastName() const;
	const std::string &GetNickname() const;
	const std::string GetPhoneNumber() const;
	const std::string &GetDarkestSecret() const;

	private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string phone_number;
	std::string DarkestSecret;
};

class PhoneBook {
	public:
	PhoneBook();
	~PhoneBook();

	void printInstrucions(bool first_time);

	void addContact();
	void searchContact();
	void run();

	int const getCurrentIndex() const;

	private:
	Contact contacts[8];
	int current_index;
};

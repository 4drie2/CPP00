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

class Contact {
public:
    Contact();
    ~Contact();

    void SetName(const std::string &NewName);
    void SetPhoneNumber(int NewPhoneNumber);

    const std::string &GetName() const;
    int GetPhoneNumber() const;

private:
    std::string name;
    int phone_number;
};

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact() const;
    void run(); // lance la boucle ADD/SEARCH/EXIT

private:
    Contact contacts[8];
    int current_index;
};
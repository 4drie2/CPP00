/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 10:11:04 by abidaux           #+#    #+#             */
/*   Updated: 2025/09/03 18:02:03 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2 || ! av[1][0])
	{
		(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl);
		return (0);
	}
	for (int j = ac - 1; j > 0; j--)
		for (int i = 0; av[j][i]; i++)
			av[j][i] = toupper(av[j][i]);
	for (int j = 1; j < ac; j++)
		std::cout << av[j];
	std::cout << std::endl;
	return (0);
}

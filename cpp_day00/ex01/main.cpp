/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:39:50 by amaach            #+#    #+#             */
/*   Updated: 2021/12/20 13:33:57 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook	ADD_contact(PhoneBook PhoneBook, int i)
{
	PhoneBook.ADD_contact(i);

	return (PhoneBook);
}

PhoneBook	Search_contact(PhoneBook PhoneBook, int i)
{
	std::cout << "  Index   |First name| Last name| Nickname " << std::endl;
	PhoneBook.SEARCH_contact(i);
	return (PhoneBook);
}

int		main()
{
	std::string		help;
	PhoneBook		PhoneBook;
	int				i = 0;

	while (1)
	{
		std::cout << "What do you wanna do ?" << std::endl;
		std::cin >> help;
		if (help == "ADD")
		{
			if (i < 8)
			{
				PhoneBook = ADD_contact(PhoneBook, i);
				i++;
			}
			else
				std::cout << "PhoneBook memorie is full" << std::endl;
		}
		else if (help == "SEARCH")
			PhoneBook = Search_contact(PhoneBook, i);
		else if (help == "EXIT")
			return (0);
	}
	return (0);
}
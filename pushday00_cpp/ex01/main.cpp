/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:39:50 by amaach            #+#    #+#             */
/*   Updated: 2022/02/19 12:25:20 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

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

void		Search_index(PhoneBook PhoneBook, int index, int i)
{
	PhoneBook.search_index(index, i);
}

int		main()
{
	std::string		help;
	char			index[1000];
	int				help_index;
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
		{
			PhoneBook = Search_contact(PhoneBook, i);
			while (1)
			{
				std::cout << "Please enter a valid index to show" << std::endl;
				std::cin >> index;
				help_index = std::atoi(index);
				if (help_index <= i && help_index > 0)
				{
					Search_index(PhoneBook, help_index, i);
					break;
				}
			}
		}
		else if (help == "EXIT")
			return (0);
	}
	return (0);
}
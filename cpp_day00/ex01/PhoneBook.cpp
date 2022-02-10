/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:30:19 by amaach            #+#    #+#             */
/*   Updated: 2021/12/20 13:31:34 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    // std::cout << "Constructor Called" << std::endl;
}

PhoneBook::~PhoneBook( void )
{
    // std::cout << "Destructor Called" << std::endl;
}

void	PhoneBook::ADD_contact( int i)
{
	Contact[i].ADD_contact(i);
}

void	PhoneBook::SEARCH_contact(int i)
{
    int     j = 0;

	while (j < i)
    {
		Contact[j].SEARCH_contact();
        j++;
    }
}
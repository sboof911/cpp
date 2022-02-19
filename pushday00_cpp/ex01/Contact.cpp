/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:24:11 by amaach            #+#    #+#             */
/*   Updated: 2022/02/19 12:19:53 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    // std::cout << "Contact Constructor Called" << std::endl;
}

Contact::~Contact( void )
{
    // std::cout << "Contact Destructor Called" << std::endl;
}

bool isNumber(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
	{
        if (std::isdigit(str[i]) == 0)
			return false;
    }
    return true;
}

void	Contact::ADD_contact( int i )
{
	this->_index = i + 1;
	std::cout << "Please enter your First Name : ";
	std::cin >> this->_Fisrt_name;
	std::cout << "Please enter your Last Name : ";
	std::cin >> this->_Last_name;
	std::cout << "Please enter your Nickname : ";
	std::cin >> this->_NickName;
	while (1)
	{
		std::cout << "Please enter your Phone_Number : ";
		std::cin >> this->_Phone_Number;
		if (isNumber(this->_Phone_Number) && this->_Phone_Number.size() == 10)
			break;
	}
	std::cout << "Please enter your Darkest_secret : ";
	std::cin >> this->_Darkest_secret;
}

std::string	set_string(std::string	str)
{
	if (str.size() > 10)
		str = str.replace(9, str.size(), ".");
	return (str);
}

void	Contact::SEARCH_contact( void )
{
	std::cout << std::setw(10);
	std::cout << this->_index;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << set_string(this->_Fisrt_name);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout<< set_string(this->_Last_name);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << set_string(this->_NickName) << std::endl;
}

void	Contact::search_index(int indeX )
{
	if (indeX == this->_index)
	{
		std::cout << "  Index   |First name| Last name| Nickname " << std::endl;
		std::cout << std::setw(10);
		std::cout << this->_index;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << set_string(this->_Fisrt_name);
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout<< set_string(this->_Last_name);
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << set_string(this->_NickName) << std::endl;
	}
}
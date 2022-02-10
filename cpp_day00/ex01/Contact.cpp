/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:24:11 by amaach            #+#    #+#             */
/*   Updated: 2021/12/20 13:31:29 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    // std::cout << "Constructor Called" << std::endl;
}

Contact::~Contact( void )
{
    // std::cout << "Destructor Called" << std::endl;
}

void	Contact::ADD_contact( int i )
{
	this->index = i + 1;
	std::cout << "Please enter your First Name : ";
	std::cin >> this->Fisrt_name;
	std::cout << "Please enter your Last Name : ";
	std::cin >> this->Last_name;
	std::cout << "Please enter your Nickname : ";
	std::cin >> this->NickName;
	std::cout << "Please enter your Phone_Number : ";
	std::cin >> this->_Phone_Number;
	std::cout << "Please enter your Darkest_secret : ";
	std::cin >> this->_Darkest_secret;
}

std::string	set_string(std::string	str)
{
	int		i = 0;

	if (str.size() > 10)
		str = str.replace(9, str.size(), ".");
	return (str);
}

void	Contact::SEARCH_contact( void )
{
	std::cout << std::setw(10);
	std::cout << this->index;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << set_string(this->Fisrt_name);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout<< set_string(this->Last_name);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << set_string(this->NickName) << std::endl;
}

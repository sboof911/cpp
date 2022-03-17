/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:29:55 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 17:26:54 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal Default Constractor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type)
{
    this->_type = type;
    std::cout << "WrongAnimal Constractor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal Destroctor Called" << std::endl;    
}

WrongAnimal  WrongAnimal::operator=(WrongAnimal const & src)
{
    if (this != &src)
        this->_type = src._type;

    return *this;
}

std::string    WrongAnimal::getType( void ) const
{
    return (this->_type);
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "I m an WrongAnimal I don t make sound" << std::endl;
}
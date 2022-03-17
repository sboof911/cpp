/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:29:55 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 21:11:57 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal Default Constractor called" << std::endl;
}

Animal::Animal( std::string type)
{
    this->_type = type;
    std::cout << "Animal Constractor called" << std::endl;
}

Animal::Animal( Animal const & src)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal( void )
{
    std::cout << "Animal Destroctor Called" << std::endl;    
}

// Animal  Animal::operator=(Animal const & src)
// {
//     if (this != &src)
//     {
//         this->_type = src._type;
//     }
//     return *this;
// }

std::string    Animal::getType( void ) const
{
    return (this->_type);
}

void    Animal::makeSound( void ) const
{
    std::cout << "I m an Animal I don t make sound" << std::endl;
}


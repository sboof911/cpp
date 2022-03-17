/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:12:51 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:31:01 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog")
{
    std::cout << "WrongDog Default Constractor called" << std::endl;
}

WrongDog::WrongDog( WrongDog const & src)
{
    std::cout << "WrongDog Copy constructor called" << std::endl;
    *this = src;
}

WrongDog::~WrongDog( void )
{
    std::cout << "WrongDog Destroctor Called" << std::endl;   
}

WrongDog     WrongDog::operator=(WrongDog const & src)
{
    if (this != &src)
        this->_type = src._type;

    return *this;
}

void    WrongDog::makeSound( void ) const
{
    std::cout << "A OOOOHOHOHOHOHOHOHOHOHOHOH" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:12:51 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:31:01 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constractor called" << std::endl;
}

Dog::Dog( Dog const & src)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog( void )
{
    std::cout << "Dog Destroctor Called" << std::endl;   
}

Dog     Dog::operator=(Dog const & src)
{
    if (this != &src)
        this->_type = src._type;

    return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << "A OOOOHOHOHOHOHOHOHOHOHOHOH" << std::endl;
}
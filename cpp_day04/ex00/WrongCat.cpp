/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:13:00 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 17:28:08 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default Constractor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat Destroctor Called" << std::endl;   
}

WrongCat     WrongCat::operator=(WrongCat const & src)
{
    if (this != &src)
        this->_type = src._type;

    return *this;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "MIAO MIAO" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:13:00 by amaach            #+#    #+#             */
/*   Updated: 2022/03/10 18:29:28 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default Constractor called" << std::endl;
}

Cat::Cat( Cat const & src)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat( void )
{
    std::cout << "Cat Destroctor Called" << std::endl;   
}

Cat     Cat::operator=(Cat const & src)
{
    if (this != &src)
        this->_type = src._type;

    return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "MIAO MIAO" << std::endl;
}

Brain*     Cat::getBrain( void ) const
{
    return (this->brain);
}

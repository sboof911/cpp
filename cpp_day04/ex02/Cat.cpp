/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:13:00 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 21:51:26 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default Constractor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat( Cat const & src)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}

Cat::~Cat( void )
{
    std::cout << "Cat Destroctor Called" << std::endl;   
    delete this->_brain;
}

Cat     &Cat::operator=(Cat const & src)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        *(this->_brain) = *(src.getBrain());
        this->_type = src._type;
    }
    return *this;
}

Animal     &Cat::operator=(Animal const & src)
{
    std::cout << "Animal Copy assignment operator called in Cat" << std::endl;
    if (this != &src)
    {
       *(this->_brain) = *(src.getBrain());
        this->_type = src.getType();
    }
    return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "MIAO MIAO" << std::endl;
}

Brain*     Cat::getBrain( void ) const
{
    return (this->_brain);
}

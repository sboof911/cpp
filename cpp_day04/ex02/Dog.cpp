/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:12:51 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 21:50:24 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constractor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog( Dog const & src)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}

Dog::~Dog( void )
{
    std::cout << "Dog Destroctor Called" << std::endl;   
    delete this->_brain;
}

Dog     &Dog::operator=(Dog const & src)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &src)
    {
       *(this->_brain) = *(src.getBrain());
        this->_type = src._type;
    }
    return *this;
}

Animal     &Dog::operator=(Animal const & src)
{
    std::cout << "Animal Copy assignment operator called in Dog" << std::endl;
    if (this != &src)
    {
       *(this->_brain) = *(src.getBrain());
        this->_type = src.getType();
    }
    return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << "A OOOOHOHOHOHOHOHOHOHOHOHOH" << std::endl;
}

Brain*  Dog::getBrain( void ) const
{
    return (this->_brain);
}
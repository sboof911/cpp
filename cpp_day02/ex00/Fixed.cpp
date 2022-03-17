/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:42:24 by amaach            #+#    #+#             */
/*   Updated: 2022/03/17 18:27:14 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _store_Fpn (0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&   Fixed::operator=(Fixed const & src )
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &src)
        this->_store_Fpn = src.getRawBits();

    return *this;
}

int Fixed::getRawBits( void ) const
{
    return (this->_store_Fpn);
}

void Fixed::setRawBits( int const raw )
{
    this->_store_Fpn = raw;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:42:24 by amaach            #+#    #+#             */
/*   Updated: 2022/03/17 23:36:16 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _store_Fpn (0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed( int const fp)
{
    // std::cout << "Constractor int called" << std::endl;
    this->_store_Fpn = fp << this->_store_fraction;
}

Fixed::Fixed( float const fp )
{
    // std::cout << "Constractor float called" << std::endl;
    this->_store_Fpn = roundf(fp * (1 << _store_fraction));
}

Fixed::~Fixed( void )
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed&   Fixed::operator=(Fixed const & src )
{
    if (this != &src)
        this->_store_Fpn = src.getRawBits();

    return *this;
}

std::ostream&  operator<<(std::ostream &o, Fixed const & src)
{
    o << src.toFloat();
    return (o);
}

float   Fixed::toFloat( void ) const
{
    return ((float)this->_store_Fpn / (float)(1 << this->_store_fraction));
}

int     Fixed::toInt( void ) const
{
    return (this->_store_Fpn >> this->_store_fraction);
}

int Fixed::getRawBits( void ) const
{
    return (this->_store_Fpn);
}

void Fixed::setRawBits( int const raw )
{
    this->_store_Fpn = raw;
}


bool Fixed::operator>(Fixed const &_Fixed) const
{
    return (this->getRawBits() > _Fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &_Fixed) const
{
    return (this->getRawBits() < _Fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &_Fixed) const
{
    return (this->getRawBits() >= _Fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &_Fixed) const
{
    return (this->getRawBits() <= _Fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &_Fixed) const
{
    return (this->getRawBits() == _Fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &_Fixed) const
{
    return (this->getRawBits() != _Fixed.getRawBits());
}


Fixed &Fixed::operator++(void)
{
    ++_store_Fpn;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed help(*this);
    
    _store_Fpn++;
    return help;
}

Fixed &Fixed::operator--(void)
{
    --_store_Fpn;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed help(*this);
    
    _store_Fpn--;
    return help;
}


Fixed	Fixed::operator+( const Fixed &src ) const
{
    Fixed	help;

	help.setRawBits(this->getRawBits() + src.getRawBits());
	return (help);
}

Fixed	Fixed::operator-( const Fixed &src ) const
{
    Fixed	help;

	help.setRawBits(this->getRawBits() - src.getRawBits());
	return (help);
}

Fixed	Fixed::operator*( const Fixed &src ) const
{
    Fixed	help(this->toFloat() * src.toFloat());

	return (help);
}

Fixed	Fixed::operator/( const Fixed &src ) const
{
    Fixed	help(this->toFloat() / src.toFloat());

	return (help);
}


const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    else 
        return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    else 
        return f2;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:58:44 by amaach            #+#    #+#             */
/*   Updated: 2022/04/02 19:10:22 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
    this->_N = 0;
    this->_Size = 0;
}

Span::Span( int N )
{
    this->_N = N;
    this->_Size = 0;
}

Span::Span( Span const & src )
{
    *this = src;
}

Span::~Span( void )
{
    
}

Span   Span::operator=( Span const & src)
{
    if (this != &src)
    {
        this->_N = src._N;
        this->_Size = src._Size;
        this->_MyVector = src._MyVector;
    }
    return (*this);
}

int             Span::getNumber( void )
{
    return this->_N;
}

int             Span::getSize( void )
{
    return ( this->_Size);
}

std::vector<int>    Span::getVector( void )
{
    return ( this ->_MyVector);
}

void        Span::addNumber(int n)
{
    if (static_cast<int>(this->_Size) < this->_N)
    {
        this->_MyVector.push_back(n);
        this->_Size++;
    }
    else
        throw   MaxNumbers();
}

int         Span::shortestSpan( void )
{
    if (this->_MyVector.size() <= 1)
        throw   OutOfRange();
    std::sort(this->_MyVector.begin(), this->_MyVector.end());
    return (this->_MyVector[1] - this->_MyVector[0]);
}

int         Span::longestSpan( void )
{
    if (this->_MyVector.size() <= 1)
        throw   OutOfRange();
    std::sort(this->_MyVector.begin(), this->_MyVector.end());
    return (this->_MyVector[this->_Size - 1] - this->_MyVector[0]);
}

void        Span::addRangNumber( int x, int y)
{
    if (static_cast<unsigned long>(y - x + 1) > this->_N - this->_Size)
        throw   MaxNumbers();
    for (int i = x; i <= y; i++)
        this->_MyVector.push_back(i);
    this->_Size += y - x + 1;
}

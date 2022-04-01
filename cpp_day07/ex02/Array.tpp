/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:56:19 by amaach            #+#    #+#             */
/*   Updated: 2022/04/01 00:12:55 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : _n(1)
{
    this->_Array = new int();
}

template <typename T>
Array<T>::Array( u_int n) : _n(n)
{
    this->_Array = new T[n];
}

// template <typename T>
// Array<T>::Array(const Array<T>& src)
// {
//     *this = src;
// }

template <typename T>
Array<T>::~Array( void )
{
    delete [] this->_Array;
}

template <typename T>
T*      Array<T>::getArray( void )
{
    return (this->_Array);
}

template <typename T>
u_int   Array<T>::size( void )
{
    return (this->_n);
}

template <typename T>
T&      Array<T>::operator=( Array<T> & src )
{
    if (this != &src)
    {
        this->_n = src.size();
        this->_Array = new T[this->_n];
        for (u_int i = 0; i < this->_n; i++)
            this->_Array[i] = src.getArray()[i];
    }
    return (reinterpret_cast<T&>(*this));
}

template <typename T>
const char* Array<T>::OutOfRang::what() const throw()
{
    return ("Index Out Of Range");
}

template <typename T>
T& Array<T>::operator[](u_int index)
{
    if (index >= this->_n || index < 0)
        throw   Array::OutOfRang();

    return this->_Array[index];
}

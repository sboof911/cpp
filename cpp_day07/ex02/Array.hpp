/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:48:09 by amaach            #+#    #+#             */
/*   Updated: 2022/04/01 00:09:14 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY
#define _ARRAY

#include <iostream>

template <typename T>
class   Array
{
    public :
        Array<T>( void );
        Array<T>( u_int n);
        Array<T>( Array<T> & src) {*this = src;};
        ~Array<T>( void );
        T*      getArray( void );
        u_int   size( void );
        T&      operator=( Array<T> & src);
        T&      operator[]( u_int index );

        class   OutOfRang  : public std::exception
        {
           public:
            virtual const char* what() const throw();
        };

    private :
        T *     _Array;
        u_int   _n;
};

#endif

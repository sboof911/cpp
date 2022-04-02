/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:40:33 by amaach            #+#    #+#             */
/*   Updated: 2022/04/02 18:54:03 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN
#define _SPAN

#include <iostream>
#include <algorithm>
#include <vector>

class   Span
{
    public :
        Span( int N );
        Span( Span const & src);
        ~Span( void );
        Span    operator=( Span const & src);
        int     getNumber( void );
        int     getSize( void );
        std::vector<int>    getVector( void );
        void    addNumber(int n);
        void    addRangNumber(int x, int y);
        int     shortestSpan( void );
        int     longestSpan( void );
        class   MaxNumbers  : public std::exception
        {
           public:
            virtual const char* what() const throw()
            {
                return "Max Range";
            }
        };
        class   OutOfRange  : public std::exception
        {
           public:
            virtual const char* what() const throw()
            {
                return "No Range To Count";
            }
        };

    private :
        int     _N;
        size_t  _Size;
        std::vector<int> _MyVector;
        Span( void );

};

#endif
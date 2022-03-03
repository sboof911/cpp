/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:38:13 by amaach            #+#    #+#             */
/*   Updated: 2022/02/23 13:39:41 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H
#define _FIXED_H

#include <iostream>
#include <math.h>

class Fixed
{
        
    public:
        Fixed( void );                                  //canonics form
        Fixed( int const fp );
        Fixed ( float const fp );                               
        Fixed( Fixed const & src );                      //canonics form
        ~Fixed( void );                                 //canonics form

        Fixed&   operator=(Fixed const & src );          //canonics form
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

    private:

        static const int _store_fraction = 8;
        int              _store_Fpn;

};

std::ostream    &   operator<<(std::ostream &o, Fixed const & src);

#endif
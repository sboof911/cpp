/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:38:13 by amaach            #+#    #+#             */
/*   Updated: 2022/03/03 14:03:08 by amaach           ###   ########.fr       */
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

        Fixed&  operator=(Fixed const & src );          //canonics form
        
        bool operator>(Fixed const &_Fixed) const;
        bool operator<(Fixed const &_Fixed) const;
        bool operator>=(Fixed const &_Fixed) const;
        bool operator<=(Fixed const &_Fixed) const;
        bool operator==(Fixed const &_Fixed) const;
        bool operator!=(Fixed const &_Fixed) const;

        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        Fixed &min(Fixed &f1, Fixed &f2);
        const Fixed &min(const Fixed &f1, const Fixed &f2);
        Fixed &max(Fixed &f1, Fixed &f2);
        const Fixed &max(const Fixed &f1, const Fixed &f2);

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
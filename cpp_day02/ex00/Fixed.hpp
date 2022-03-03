/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:38:13 by amaach            #+#    #+#             */
/*   Updated: 2022/02/22 11:20:35 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H
#define _FIXED_H

#include <iostream>

class Fixed
{
        
    public:
        Fixed( void );                                  //canonics form
        // Fixed( /*args*/);                               
        Fixed( Fixed const & src );                      //canonics form
        ~Fixed( void );                                 //canonics form

        Fixed&   operator=(Fixed const & src );          //canonics form
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:

        static const int _store_fraction = 8;
        int              _store_Fpn;

};

std::ostream    &   operator<<(std::ostream &o, Fixed const & src);

#endif
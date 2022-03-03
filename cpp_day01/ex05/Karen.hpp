/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:26:39 by amaach            #+#    #+#             */
/*   Updated: 2022/02/17 13:01:57 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Karen
#define _Karen

#include <string>
#include <iostream>

class   Karen
{
    private:

        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );

    public:
        Karen();
        ~Karen();

        void complain( std::string level );
};

#endif
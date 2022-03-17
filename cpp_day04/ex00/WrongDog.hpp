/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:12:03 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:30:33 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGDOG_
#define _WRONGDOG_

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    private :

    public :
        WrongDog( void );
        WrongDog( WrongDog const & src);
        ~WrongDog( void );

        WrongDog    operator=(WrongDog const & src);
        void    makeSound( void ) const;
};

#endif
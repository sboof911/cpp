/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:12:03 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:30:33 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_
#define _DOG_

#include "Animal.hpp"

class Dog : public Animal
{
    private :

    public :
        Dog( void );
        Dog( Dog const & src);
        ~Dog( void );

        Dog    operator=(Dog const & src);
        void    makeSound( void ) const;
};

#endif
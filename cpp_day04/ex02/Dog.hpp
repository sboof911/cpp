/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:12:03 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 21:25:18 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_
#define _DOG_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain* _brain;

    public :
        Dog( void );
        Dog( Dog const & src);
        ~Dog( void );

        Dog         &operator=(Dog const & src);
        Animal      &operator=(Animal const & src);
        void        makeSound( void ) const;
        Brain*      getBrain( void ) const;
};

#endif
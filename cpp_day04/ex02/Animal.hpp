/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:29:56 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 21:25:34 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMALS_
#define _ANIMALS_

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal( void );
        Animal( std::string type);
        Animal(Animal const & src);
        virtual ~Animal( void );

        // virtual Animal  operator=(Animal const & src);
        std::string     getType( void ) const;
        virtual void    makeSound( void ) const;
        virtual Brain*  getBrain( void ) const = 0;
};

#endif
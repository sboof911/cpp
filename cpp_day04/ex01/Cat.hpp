/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:11:24 by amaach            #+#    #+#             */
/*   Updated: 2022/03/10 18:29:40 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_
#define _CAT_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;

    public :
        Cat( void );
        Cat( Cat const & src);
        ~Cat( void );

        Cat    operator=(Cat const & src);
        void    makeSound( void ) const;
        Brain*  getBrain( void ) const;
};

#endif
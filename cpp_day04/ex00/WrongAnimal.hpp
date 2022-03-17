/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:29:56 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:32:05 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMALS_
#define _WRONGANIMALS_

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal( void );
        WrongAnimal( std::string type);
        WrongAnimal(WrongAnimal const & src);
        ~WrongAnimal( void );

        WrongAnimal          operator=(WrongAnimal const & src);
        std::string     getType( void ) const;
        void            makeSound( void ) const;


};

#endif
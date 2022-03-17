/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:11:24 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:31:17 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_
#define _WRONGCAT_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private :
    
    public :
        WrongCat( void );
        WrongCat( WrongCat const & src);
        ~WrongCat( void );

        WrongCat    operator=(WrongCat const & src);
        void    makeSound( void ) const;
};

#endif
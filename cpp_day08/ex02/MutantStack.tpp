/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:41:21 by amaach            #+#    #+#             */
/*   Updated: 2022/04/02 21:52:59 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
Mutanstack::Mutanstack( void )
{

}

template <typename T>
Mutanstack::Mutanstack( MutantStack const & src )
{
    *this = src;
}

template <typename T>
Mutanstack::~Mutanstack( void )
{
    
}


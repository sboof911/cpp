/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:29:20 by amaach            #+#    #+#             */
/*   Updated: 2022/04/02 22:08:40 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK
#define _MUTANTSTACK

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T>

class MutantStack : public stack
{
    public :
        MutantStack<T>( void );
        MutantStack<T>( MutantStack const & src);
        ~MutantStack<T>();
    
        typedef typename MutantStack::iterator iterator;

        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
};

#endif
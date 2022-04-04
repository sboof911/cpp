/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:29:20 by amaach            #+#    #+#             */
/*   Updated: 2022/04/04 16:27:19 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK
#define _MUTANTSTACK

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T >

class MutantStack : public std::stack<T>
{
    public :
        MutantStack<T>( void ) {};
        MutantStack<T>( MutantStack const & src) {*this = src;};
        ~MutantStack<T>() {};
        // MutantStack<T>     operator=(MutantStack const & src);
    
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
        reverse_iterator    rbegin() {return this->c.rbegin();}
        reverse_iterator    rend() {return this->c.rend();}
};

#endif
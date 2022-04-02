/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:29:15 by amaach            #+#    #+#             */
/*   Updated: 2022/04/02 15:34:12 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND
#define _EASYFIND

#include <algorithm>
#include <iostream>
#include <vector>

class   undefined  : public std::exception
{
   public:
    virtual const char* what() const throw()
    {
        return "Wrong Integer";
    }
};

template <typename T>
int     easyfind(T array, int x)
{
    typename T::iterator     p;

    p = std::find(array.begin(), array.end(), x);
    if (p == array.end())
        throw undefined();
    else
        return (*p);
}

#endif
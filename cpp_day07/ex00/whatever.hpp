/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:17:11 by amaach            #+#    #+#             */
/*   Updated: 2022/03/31 20:36:29 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER
#define _WHATEVER

#include <iostream>

template < typename T>
void    swap(T & x, T & y)
{
    T   z;

    z = x;
    x = y;
    y = z;
}

template < typename T>
T&      min(T & x, T & y)
{
    return (x > y ? y : x);
}

template < typename T>
T&      max(T & x, T & y)
{
    return ( x > y ? x : y);
}

#endif
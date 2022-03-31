/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:44:28 by amaach            #+#    #+#             */
/*   Updated: 2022/03/31 21:45:06 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER
#define _ITER

#include <iostream>

template <typename T>
void    iter(T* x, int y, void (*f)(T const &k))
{
    for (int i = 0; i < y; i++)
        f(x[i]);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:00:40 by amaach            #+#    #+#             */
/*   Updated: 2022/03/31 15:34:25 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE
#define _BASE

#include <iostream>

class   Base
{
    public :
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
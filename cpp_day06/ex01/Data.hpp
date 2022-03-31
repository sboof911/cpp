/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:18:29 by amaach            #+#    #+#             */
/*   Updated: 2022/03/31 15:33:38 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATA
#define _DATA

#include <iostream>
#include <stdint.h>

class Data
{
private:
    /* data */
public:
    Data();
    Data( Data const & src);
    ~Data();
};


#endif
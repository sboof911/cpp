/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:18:26 by amaach            #+#    #+#             */
/*   Updated: 2022/03/31 15:24:46 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void )
{
    std::cout << "Default Constractor Called" << std::endl;
}

Data::Data( Data const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Data::~Data( void )
{
    std::cout << "Destroctor Called" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:39:05 by amaach            #+#    #+#             */
/*   Updated: 2022/02/10 15:29:12 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string weapon_use)
{
    std::cout << "Weapon Constractor Called" << std::endl;
    this->_weapon = weapon_use;
}

// Weapon::Weapon()
// {
//     std::cout << "Weapon Default constractor Called" << std::endl;
// }

Weapon::~Weapon()
{
    std::cout << "Weapon Destractor Called" << std::endl;
}

std::string    Weapon::getType( void )
{
    if (this->_weapon.empty())
        return "I don't have a weapon";
    else
        return this->_weapon;
}

void            Weapon::setType( std::string the_weapon )
{
    this->_weapon = the_weapon;
}

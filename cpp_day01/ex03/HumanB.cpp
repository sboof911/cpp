/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:39:05 by amaach            #+#    #+#             */
/*   Updated: 2022/02/10 17:19:06 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    std::cout << "HumanB Constractor Called" << std::endl;
    this->_humanBname = name;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destractor Called" << std::endl;
}

std::string    HumanB::getName( void )
{
    if (this->_humanBname.empty())
        return "I don't have a Name";
    else
        return this->_humanBname;
}

void            HumanB::setName( std::string the_name )
{
    this->_humanBname = the_name;
}

void            HumanB::setWeapon( Weapon& weapon_use)
{
    this->_weaponB = &weapon_use;
}

void            HumanB::attack( void )
{
    std::cout << this->_humanBname << " attacks with their " << this->_weaponB->getType() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:39:05 by amaach            #+#    #+#             */
/*   Updated: 2022/02/10 15:30:11 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon_use) : _weaponA(Weapon_use)
{
    std::cout << "HumanA Constractor Called" << std::endl;
    this->_humanAname = name;
    this->_weaponA = Weapon_use.getType();
}

// HumanA::HumanA(std::string name, Weapon Weapon_use)
// {
    // std::cout << "HumanA Constractor Called" << std::endl;
    // this->_humanAname = name;
    // this->_weapon = Weapon_use;
// }

HumanA::~HumanA()
{
    std::cout << "HumanA Destractor Called" << std::endl;
}

std::string    HumanA::getName( void )
{
    if (this->_humanAname.empty())
        return "I don't have a Name";
    else
        return this->_humanAname;
}

void            HumanA::setName( std::string the_name )
{
    this->_humanAname = the_name;
}

void            HumanA::attack( void )
{
    std::cout << this->_humanAname << " attacks with their " << _weaponA.getType() << std::endl;
}
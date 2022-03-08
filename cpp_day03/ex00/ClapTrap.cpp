/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:33:34 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:17:18 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << "Claptrap Default constractor called" << std::endl;
    this->_Hit_point = 10;
    this->_Energy_points = 10;
    this->_Attack_damage = 0;
}

ClapTrap::ClapTrap( std::string name)
{
    std::cout << "Claptrap Constractor Called" << std::endl;
    this->_Name = name;
    this->_Hit_point = 10;
    this->_Energy_points = 10;
    this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Claptrap Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Claptrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
    if (this->_Hit_point > 0 && this->_Energy_points > 0)
    {
        this->_Energy_points--;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target <<", causing " << this->_Attack_damage << " points of damage!" << std::endl;
    }
    else if (this->_Energy_points > 0)
        std::cout << "ClapTrap " << this->_Name << " is dead" << std::endl;
    else
        std::cout << "ClapTrap " << this->_Name << " has no Energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Hit_point > 0)
    {
        this->_Hit_point -= amount;
        std::cout << "ClapTrap " << this->_Name << " took " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_Name << " has no Energy" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_Hit_point > 0 && this->_Energy_points > 0)
    {
        this->_Energy_points--;
        this->_Hit_point += amount;
        std::cout << "ClapTrap " << this->_Name << " repaired " << amount << " points of damage!" << std::endl;
    }
    else if (this->_Energy_points > 0)
        std::cout << "ClapTrap " << this->_Name << " is dead" << std::endl;
    else
        std::cout << "ClapTrap " << this->_Name << " has no Energy" << std::endl;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const & src )
{
    std::cout << "Claptrap Copy assignment operator called" << std::endl;

    if (this != &src)
    {
        this->_Name = src._Name;
        this->_Hit_point = src._Hit_point;
        this->_Energy_points = src._Energy_points;
        this->_Attack_damage = src._Attack_damage;
    }

    return *this;
}

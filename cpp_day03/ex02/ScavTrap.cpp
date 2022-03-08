/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:42:33 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:16:56 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    std::cout << "ScavTrap Default constractor called" << std::endl;
    this->_Hit_point = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::ScavTrap( std::string name)
{
    std::cout << "ScavTrap constractor called" << std::endl;
    this->_Name = name;
    this->_Hit_point = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap Destractor called" << std::endl;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap entred Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_Hit_point > 0 && this->_Energy_points > 0)
    {
        this->_Energy_points--;
        std::cout << "ScavTrap " << this->_Name << " attacks " << target <<", causing " << this->_Attack_damage << " points of damage!" << std::endl;
    }
    else if (this->_Energy_points > 0)
        std::cout << "ScavTrap " << this->_Name << " is dead" << std::endl;
    else
        std::cout << "ScavTrap " << this->_Name << " has no Energy" << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const & src )
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;

    if (this != &src)
    {
        this->_Name = src._Name;
        this->_Hit_point = src._Hit_point;
        this->_Energy_points = src._Energy_points;
        this->_Attack_damage = src._Attack_damage;
    }

    return *this;
}

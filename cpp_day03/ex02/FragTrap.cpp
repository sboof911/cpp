/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:58:23 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:15:58 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    std::cout << "FragTrap default constractor called" << std::endl;
    this->_Attack_damage = 30;
    this->_Energy_points = 100;
    this->_Hit_point = 100;
}

FragTrap::FragTrap( std::string name)
{
    std::cout << "FragTrap constractor called" << std::endl;
    this->_Name = name;
    this->_Attack_damage = 30;
    this->_Energy_points = 100;
    this->_Hit_point = 100;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destroctor called" << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const & src)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;

    if (this != &src)
    {
        this->_Name = src._Name;
        this->_Hit_point = src._Hit_point;
        this->_Energy_points = src._Energy_points;
        this->_Attack_damage = src._Attack_damage;
    }

    return *this;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->_Hit_point > 0 && this->_Energy_points > 0)
    {
        this->_Energy_points--;
        std::cout << "FragTrap " << this->_Name << " attacks " << target <<", causing " << this->_Attack_damage << " points of damage!" << std::endl;
    }
    else if (this->_Energy_points > 0)
        std::cout << "FragTrap " << this->_Name << " is dead" << std::endl;
    else
        std::cout << "FragTrap " << this->_Name << " has no Energy" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "Give me a high five bro" << std::endl;
}

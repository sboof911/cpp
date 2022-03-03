/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:54:11 by amaach            #+#    #+#             */
/*   Updated: 2022/02/07 17:17:14 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "constractor was called" << std::endl;
}

Zombie::Zombie( void )
{
    std::cout << "Default constractor was called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "destractor was called" << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

std::string Zombie::get_name(void)
{
    return (this->_name);
}

void    Zombie::announce(void)
{
    if (this->_name.empty())
        std::cout << "I m empty" << std::endl;
    else if (this->_name == "Foo")
        std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
    else
        std::cout << "<" << this->_name << ">: BraiiiiiiinnnzzzZ..."<< std::endl;
    
}
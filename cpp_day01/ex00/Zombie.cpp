/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:58:38 by amaach            #+#    #+#             */
/*   Updated: 2022/03/16 15:44:59 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Constractor was called" << std::endl;
}

Zombie::Zombie( void )
{
    std::cout << "Default constractor was called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Destractor " << this->_name << " was called" << std::endl;
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
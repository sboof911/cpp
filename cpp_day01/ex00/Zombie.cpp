/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:58:38 by amaach            #+#    #+#             */
/*   Updated: 2022/02/07 16:38:07 by amaach           ###   ########.fr       */
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

void    Zombie::announce(void)
{
    if (this->_name.empty())
        std::cout << "I m empty" << std::endl;
    else if (this->_name == "Foo")
        std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
    else
        std::cout << "<" << this->_name << ">: BraiiiiiiinnnzzzZ..."<< std::endl;
    
}
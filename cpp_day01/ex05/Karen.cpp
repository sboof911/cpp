/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:26:29 by amaach            #+#    #+#             */
/*   Updated: 2022/02/17 13:10:15 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
    std::cout << "constracter called" << std::endl;
}

void    Karen::_debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void    Karen::_info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void    Karen::_warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::_error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    std::string     levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void            (Karen::*funct[4])( void ) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
    int             i;

    for (i = 0; i < 4; i++)
    {
        if (level == levels[i])
            (this->*funct[i])();
    }
}

Karen::~Karen( void )
{
    std::cout << "Destracter called" << std::endl;
}
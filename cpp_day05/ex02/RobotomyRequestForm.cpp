/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:18:39 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 22:05:27 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
    std::cout << "Default Constroctor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target  )
{
    std::cout << "Constroctor Called" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src)
{
    std::cout << "Copy Constroctor Called" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    std::cout << "Destroctor Called" << std::endl;
}

void    RobotomyRequestForm::operator=( RobotomyRequestForm const & src)
{
    std::cout << "Assignement operator Called" << std::endl;

    if (this != &src)
        this->_target = src.getTarget();
}

std::ostream&   operator<<(std::ostream &o, RobotomyRequestForm const & src)
{
    o << "<" << src.getTarget() << ">";
}

std::string     RobotomyRequestForm::getTarget( void ) const
{
    return (this->_target);
}
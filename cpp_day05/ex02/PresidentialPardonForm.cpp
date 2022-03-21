/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:18:40 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 22:05:32 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
    std::cout << "Default Constroctor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
{
    std::cout << "Constroctor Called" << std::endl;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src)
{
    std::cout << "Copy Constroctor Called" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    std::cout << "Destroctor Called" << std::endl;
}

void    PresidentialPardonForm::operator=( PresidentialPardonForm const & src)
{
    std::cout << "Assignement operator Called" << std::endl;

    if (this != &src)
        this->_target = src.getTarget();
}

std::ostream&   operator<<(std::ostream &o, PresidentialPardonForm const & src)
{
    o << "<" << src.getTarget() << ">";
}

std::string     PresidentialPardonForm::getTarget( void ) const
{
    return (this->_target);
}
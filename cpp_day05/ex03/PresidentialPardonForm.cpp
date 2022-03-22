/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:18:40 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 13:30:51 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
    std::cout << "PresidentialPardonForm Default Constroctor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Constroctor Called" << std::endl;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src)
{
    std::cout << "PresidentialPardonForm Copy Constroctor Called" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    std::cout << "PresidentialPardonForm Destroctor Called" << std::endl;
}

void    PresidentialPardonForm::operator=( PresidentialPardonForm const & src)
{
    std::cout << "PresidentialPardonForm Assignement operator Called" << std::endl;

    if (this != &src)
        this->_target = src.getTarget();
}

std::ostream&   operator<<(std::ostream &o, PresidentialPardonForm const & src)
{
    o << "<" << src.getTarget() << ">";
    return (o);
}

std::string     PresidentialPardonForm::getTarget( void ) const
{
    return (this->_target);
}

void	        PresidentialPardonForm::execute( const BureauCrat &executor ) const
{
    if (!this->isSigned() || this->getGradeExecute() < executor.getGrade())
        throw Form::CantExecuteForm();

    std::cout << "<" << this->getTarget() << "> à été pardonnée par Zaphod Beeblebrox" << std::endl;
}
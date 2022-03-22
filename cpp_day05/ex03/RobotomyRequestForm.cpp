/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:18:39 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 13:31:02 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm Default Constroctor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target  ) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Constroctor Called" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src)
{
    std::cout << "RobotomyRequestForm Copy Constroctor Called" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm Destroctor Called" << std::endl;
}

void    RobotomyRequestForm::operator=( RobotomyRequestForm const & src)
{
    std::cout << "RobotomyRequestForm Assignement operator Called" << std::endl;

    if (this != &src)
        this->_target = src.getTarget();
}

std::ostream&   operator<<(std::ostream &o, RobotomyRequestForm const & src)
{
    o << "<" << src.getTarget() << ">";
    return (o);
}

std::string     RobotomyRequestForm::getTarget( void ) const
{
    return (this->_target);
}

void	        RobotomyRequestForm::execute( const BureauCrat &executor ) const
{
    if (!this->isSigned() || this->getGradeExecute() < executor.getGrade())
        throw Form::CantExecuteForm();

    if (rand() % 2 == 0)
        std::cout << "<" << this->getTarget() << "> a été robotomisée" << std::endl;
    else
        std::cout << "L'opération du <" << this->getTarget() << "> á échouer" << std::endl;
}

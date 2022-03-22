/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:56:12 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 13:23:56 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat( void )
{
    std::cout << "BureauCrat Default Constractor Called" << std::endl;
    this->_Name = "";
    this->_Grade =  150;
}

BureauCrat::BureauCrat( std::string Name, int Grade )
{
    std::cout << "BureauCrat Constrostor Called" << std::endl;
    this->_Name = Name;
    this->_Grade = Grade;
    this->checkGrade();
}

BureauCrat::BureauCrat( BureauCrat const & src)
{
    std::cout << "BureauCrat Copy Constrator Called" << std::endl;
    *this = src;
}

BureauCrat::~BureauCrat( void )
{
    std::cout << "BureauCrat Destroctor called" << std::endl;
}

BureauCrat&     BureauCrat::operator=( BureauCrat const & src )
{
    if (this != &src)
    {
        this->_Name = src.getName();
        this->_Grade = src.getGrade() ;
    } 

    return *this;
}

int             BureauCrat::getGrade( void ) const
{
    return (this->_Grade);  // check Errors
}

std::string     BureauCrat::getName( void ) const
{
    return (this->_Name);   // check Errors
}

std::ostream    &   operator<<(std::ostream &o, BureauCrat const & src)
{
    o << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">.";

    return o;
}

void            BureauCrat::checkGrade( void )
{
    if (this->_Grade > 150)
        throw BureauCrat::GradeTooLowException();
    else if (this->_Grade < 1)
        throw BureauCrat::GradeTooHighException();
}

void            BureauCrat::signForm( Form & src )
{
    if (src.getSign() == true)
        std::cout << "<" << this->_Name << "> signed <" << src.getName() << ">" << std::endl;
    else
        std::cout << "<" << this->_Name << "> couldn't sign <" << src.getName() << "> because <reason>" << std::endl;
}

bool            BureauCrat::executeForm( Form const & form )
{
    try
    {
        form.execute(*this);
        std::cout << this->_Name << " executes form " << form.getName()
                  << std::endl;
        return true;
    }
    catch (Form::CantExecuteForm &e)
    {
        std::cout << e.what() << std::endl;
        return false;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:46:12 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 18:15:40 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void )
{
    std::cout << "Default Constractor called" << std::endl;
}

Form::Form( std::string name, int GradeToSign, int GradeToExecute )
{
    std::cout << "Constractor Called" << std::endl;
    this->_Name = name;
    this->_GradeToSign = GradeToSign;
    this->_GradeToExecute = GradeToExecute;
    CheckGrade();
}

Form::Form( Form const & src)
{
    std::cout << "Copy Constrator Called" << std::endl;
    *this = src;
}

Form::~Form( void )
{
    std::cout << "Destroctor Called" << std::endl;
}

void    Form::operator=( Form const & src)
{
    if (this != &src)
    {
        this->_Name = src.getName();
        this->_Sign = src.getSign();
        this->_GradeToExecute = src.getGradeExecute();
        this->_GradeToSign = src.getGradeSign();
    }
}

std::ostream    &operator<<(std::ostream &o, Form const & src)
{
    o << src.getName() << " Form has to be signed by a "
		<< src.getGradeSign() << " grade and executed by a "
		<< src.getGradeExecute() << " grade, it is "
		<< ((src.isSigned()) ? "" : "not ") << "signed";
    return (o);
}

std::string     Form::getName( void ) const
{
    return (this->_Name);
}

bool            Form::getSign( void ) const
{
    return (this->_Sign);
}

int             Form::getGradeSign( void ) const
{
    return (this->_GradeToSign);
}

int             Form::getGradeExecute( void ) const
{
    return (this->_GradeToExecute);
}

bool            Form::isSigned( void ) const
{
    return (this->_Sign);  
}

void            Form::beSigned( BureauCrat & src)
{
    if (this->_GradeToSign > src.getGrade())
        this->_Sign = true;
    else
        throw Form::GradeTooLowException();
}

void            Form::CheckGrade( void )
{
    if (this->_GradeToExecute < 1 || this->_GradeToSign < 1)
        Form::GradeTooHighException();
    else if (this->_GradeToExecute > 150 || this->_GradeToSign > 150)
        Form::GradeTooLowException();
}

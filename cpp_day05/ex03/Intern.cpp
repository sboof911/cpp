/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:49:19 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 18:41:00 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
    std::cout << "Intern Default Constroctor called" << std::endl;
}

Intern::Intern( Intern const & src)
{
    std::cout << "Intern Copy Constroctor called" << std::endl;
    *this = src;
}

Intern::~Intern( void )
{
    std::cout << "Intern Destroctor called" << std::endl;
}

void    Intern::operator=( Intern const & src)
{
    if (this != &src)
        "---";
}

Form* Intern::makeForm(std::string form , std::string target)
{
    int i = 0;
    std::string reqs[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form* (Intern::ptr[])(std::string) =  {&Intern::RobotomyRequest, &Intern::PresidentialPardon, &Intern::ShrubberyCreation};
    for(i = 0; i < 3 ; i++)
    {
        if(!form.compare(reqs[i]))
        {
            std::cout << "Intern creates " << reqs[i] << std::endl;
            break;
        }
    }
    if(i == 3)
        throw Intern::invalidForm();
    return (this->ptr[i])(target);
}

Form*    Intern::RobotomyRequest(std::string target)
{
    RobotomyRequestForm *ret = new RobotomyRequestForm(target);
    return ret;
}

Form*    Intern::PresidentialPardon(std::string target)
{
    PresidentialPardonForm *ret = new PresidentialPardonForm(target);
    return ret;
}

Form*    Intern::ShrubberyCreation(std::string target)
{
    ShrubberyCreationForm *ret = new ShrubberyCreationForm(target);
    return ret;
}
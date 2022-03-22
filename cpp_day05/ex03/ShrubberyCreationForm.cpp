/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:18:35 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 13:31:05 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
    std::cout << "ShrubberyCreationForm Default Constroctor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Constroctor Called" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src)
{
    std::cout << "ShrubberyCreationForm Copy Constroctor Called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    std::cout << "ShrubberyCreationForm Destroctor Called" << std::endl;
}

void    ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src)
{
    std::cout << "ShrubberyCreationForm Assignement operator Called" << std::endl;

    if (this != &src)
        this->_target = src.getTarget();
}

std::ostream&   operator<<(std::ostream &o, ShrubberyCreationForm const & src)
{
    o << "<" << src.getTarget() << ">";
    return (o);
}

std::string     ShrubberyCreationForm::getTarget( void ) const
{
    return (this->_target);
}

void	        ShrubberyCreationForm::execute( const BureauCrat &executor ) const
{
    if (!this->isSigned() || this->getGradeExecute() < executor.getGrade())
        throw Form::CantExecuteForm();
    std::ofstream   File("<" + this->getTarget() + ">_shrubbery");

    if (File.is_open())
    {
        File << "                         _-_                              _-_          "  << std::endl;
        File << "                      /~~   ~~\\                       /~~   ~~\\       "  << std::endl;
        File << "                   /~~         ~~\\                 /~~         ~~\\    "  << std::endl;
        File << "                  {               }                {               }   "  << std::endl;
        File << "                   \\  _-     -_  /                 \\  _-     -_  /    "  << std::endl;
        File << "                     ~  \\   //  ~                     ~ \\   //  ~      "  << std::endl;
        File << "                  _- -   | | _- _                  _- -   | | _- _     "  << std::endl;
        File << "                    _ -  | |   -_                    _ -  | |   -_     "  << std::endl;
        File << "                         // \\                            // \\         "  << std::endl;
        File << "         _-_                            _-_                            _-_            "  << std::endl;
        File << "      /~~   ~~\\                     /~~   ~~\\                     /~~   ~~\\    "  << std::endl;
        File << "   /~~         ~~\\               /~~         ~~\\               /~~         ~~\\ "  << std::endl;
        File << "  {               }              {               }              {               }"  << std::endl;
        File << "   \\  _-     -_  /               \\  _-     -_  /               \\  _-     -_  / "  << std::endl;
        File << "     ~  \\  //  ~                    ~  \\ //  ~                    ~  \\ //  ~   "  << std::endl;
        File << "  _- -   | | _- _                _- -   | | _- _                _- -   | | _- _  "  << std::endl;
        File << "    _ -  | |   -_                  _ -  | |   -_                  _ -  | |   -_  "  << std::endl;
        File << "         // \\                          // \\                          // \\      "  << std::endl;
        File << "                        _-_                              _-_          "  << std::endl;
        File << "                     /~~   ~~\\                       /~~   ~~\\       "  << std::endl;
        File << "                  /~~         ~~\\                 /~~         ~~\\    "  << std::endl;
        File << "                 {               }                {               }   "  << std::endl;
        File << "                  \\  _-     -_  /                 \\  _-     -_  /    "  << std::endl;
        File << "                    ~  \\ //  ~                      ~  \\ //  ~      "  << std::endl;
        File << "                 _- -   | | _- _                  _- -   | | _- _     "  << std::endl;
        File << "                   _ -  | |   -_                    _ -  | |   -_     "  << std::endl;
        File << "                        // \\                            // \\         "  << std::endl;
        File.close();
    }
    else
        std::cout << "Something went wrong" << std::endl;
}
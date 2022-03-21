/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:18:35 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 22:54:58 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
    std::cout << "Default Constroctor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target)
{
    std::cout << "Constroctor Called" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src)
{
    std::cout << "Copy Constroctor Called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    std::cout << "Destroctor Called" << std::endl;
}

void    ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src)
{
    std::cout << "Assignement operator Called" << std::endl;

    if (this != &src)
        this->_target = src.getTarget();
}

std::ostream&   operator<<(std::ostream &o, ShrubberyCreationForm const & src)
{
    o << "<" << src.getTarget() << ">";
}

std::string     ShrubberyCreationForm::getTarget( void ) const
{
    return (this->_target);
}

void	        ShrubberyCreationForm::execute( const BureauCrat &executor )
{
    // check Grades Execution
    // check sign ?
    // 
        if (/*check Conditions*/ 1)
    {
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
    else
        std::cout << "<" << this->getTarget() << "> has not the propre Grade" << std::endl;
}
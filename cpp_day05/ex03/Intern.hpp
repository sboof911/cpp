/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:48:15 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 18:41:45 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_
#define _INTERN_

#include <Form.hpp>
#include <list>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class   Intern
{
    public:
        Intern( void );
        Intern( Intern const & src);
        ~Intern( void );
        void    operator=(Intern const & src); 
        Form*   makeForm( std::string form, std::string target );
        Form*   RobotomyRequest(std::string target);
        Form*   PresidentialPardon(std::string target);
        Form*   ShrubberyCreation(std::string target);

        class   invalidForm : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return ("Invalid Form");
            }
        };
    private:
        

    
};

#endif
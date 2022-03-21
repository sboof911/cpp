/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:56:10 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 16:30:59 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H
#define _BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"
class Form;

class BureauCrat
{
    public:
        BureauCrat( void );
        BureauCrat( std::string name, int Grade );
        BureauCrat( BureauCrat const & src );
        ~BureauCrat( void );
        
        BureauCrat&  operator=(BureauCrat const & src);
        int             getGrade( void ) const;
        std::string     getName( void ) const;
        // void            setName( std::string name );
        // void            setGrade( int grade);
        void            checkGrade( void );
        void            signForm( Form & src );
        
        class   GradeTooHighException  : public std::exception
        {
           public:
            virtual const char* what() const throw()
            {
                return ("Grade is too high");
            } 
        };

        class   GradeTooLowException  : public std::exception
        {
           public:
            virtual const char* what() const throw()
            {
                return ("Grade is too low");
            } 
        };

    private:
        std::string   _Name;    // needs to be const
        int           _Grade;
};

std::ostream    &   operator<<(std::ostream &o, BureauCrat   const & src);



#endif
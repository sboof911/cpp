/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:35:15 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 22:05:44 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_
# define _FORM_

#include <iostream>
#include "BureauCrat.hpp"

class   BureauCrat;

class   Form
{
    public:
        Form( void );
        Form( std::string name, int GradeToSign, int GradeToExecute );
        Form( Form const & src );
        ~Form( void );
        std::string     getName( void ) const;
        bool            getSign( void ) const;
        int             getGradeSign( void ) const;
        int             getGradeExecute( void ) const;
        bool            isSigned( void ) const;
        void            operator=(Form const & src);
        void            beSigned( BureauCrat & src);
        void            CheckGrade( void );
        virtual void	execute( const BureauCrat &executor ) const = 0;

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Form Grade is too high");
                } 
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Form Grade is too low");
                }
        };

    private:
        std::string     _Name;
        bool            _Sign;
        int            _GradeToSign;
        int            _GradeToExecute;
        
};

std::ostream    &operator<<(std::ostream &o, Form const & src);

#endif
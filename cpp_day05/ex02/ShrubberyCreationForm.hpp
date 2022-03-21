/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:09:47 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 22:12:12 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_
#define _SHRUBBERYCREATIONFORM_

#include <iostream>
#include "Form.hpp"
#include <fstream>

class   ShrubberyCreationForm : public Form
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string target);
        ShrubberyCreationForm( ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm( void );
        void    operator=(ShrubberyCreationForm const & src);
        std::string     getTarget( void ) const;
        void            CreatFile( void );
        void	        execute( const BureauCrat &executor );

    
};

std::ostream&    operator<<(std::ostream &o, ShrubberyCreationForm const & src);

#endif
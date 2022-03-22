/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:09:45 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 13:03:22 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_
#define _PRESIDENTIALPARDONFORM_

#include <iostream>
#include "Form.hpp"

class   PresidentialPardonForm : public Form
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( std::string target );
        PresidentialPardonForm( PresidentialPardonForm const & src);
        ~PresidentialPardonForm( void );
        void    operator=(PresidentialPardonForm const & src);
        std::string     getTarget( void ) const;
        void	        execute( const BureauCrat &executor ) const;

};

std::ostream&    operator<<(std::ostream &o, PresidentialPardonForm const & src);

#endif
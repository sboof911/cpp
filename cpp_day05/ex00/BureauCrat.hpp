/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:56:10 by amaach            #+#    #+#             */
/*   Updated: 2022/03/18 00:41:52 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H
#define _BUREAUCRAT_H

#include <iostream>

class BureauCrat
{
    public:
        BureauCrat( void );
        BureauCrat( std::string name, int Grade );
        BureauCrat( BureauCrat const & src );
        ~BureauCrat( void );
        BureauCrat&  operator=(BureauCrat const & src);
        int             getGrade( void );
        std::string     getName( void );

    private:
        std::string   _Name;    // needs to be const
        int           _Grade;
};

std::ostream    &   operator<<(std::ostream &o, BureauCrat   const & src);



#endif
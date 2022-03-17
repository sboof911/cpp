/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:56:10 by amaach            #+#    #+#             */
/*   Updated: 2022/03/18 00:24:07 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_
#define _BUREAUCRAT_

#include <iostream>

class   BureauCrat
{
    private :
        std::string   _Name;    // needs to be const
        int                 _Grade;

    public  :
        BureauCrat( void );
        BureauCrat( std::string name, int Grade );
        BureauCrat( BureauCrat const & src );
        ~BureauCrat( void );
        BureauCrat&  operator=(BureauCrat const & src);

        std::string     getName( void );
        int             getGrade( void );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:50:32 by amaach            #+#    #+#             */
/*   Updated: 2022/03/10 18:23:46 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_
#define _BRAIN_

#include <iostream>

class Brain
{
    private:
        
    public:
        Brain( void );
        Brain( Brain const & src);
        ~Brain();
        
        Brain& operator=(Brain const & src);
        std::string ideas[100];
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:27:13 by amaach            #+#    #+#             */
/*   Updated: 2022/03/06 16:21:32 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H
#define _CLAPTRAP_H

#include <iostream>

class   ClapTrap
{
    public :
    
        ClapTrap( void );                           // cannonic
        ClapTrap(std::string name);                 // cannonic
        ClapTrap(ClapTrap const & src);
        ~ClapTrap( void );                          // cannonic

        ClapTrap&  operator=(ClapTrap const & src ); // cannonic

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private :

        std::string     _Name;
        int             _Hit_point;
        int             _Energy_points;
        int             _Attack_damage;
};

#endif
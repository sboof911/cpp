/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:36:36 by amaach            #+#    #+#             */
/*   Updated: 2022/02/10 17:18:48 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HumanB
#define _HumanB

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
    private:
        
        std::string _humanBname;
        Weapon*      _weaponB;


    public:
        HumanB(std::string name);
        ~HumanB();

        std::string getName( void );
        void        setName( std::string the_name);
        void        setWeapon( Weapon& weapon_use);
        void        attack( void );
};

#endif
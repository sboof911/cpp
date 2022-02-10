/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:36:36 by amaach            #+#    #+#             */
/*   Updated: 2022/02/10 15:28:56 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HumanA
#define _HumanA

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class Weapon;

class HumanA
{
    private:

        std::string _humanAname;
        Weapon&      _weaponA;

    public:
        HumanA(std::string name, Weapon& weappon_use);
        ~HumanA();
        void    attack( void );

        std::string getName( void );
        void        setName( std::string the_name);
};

#endif
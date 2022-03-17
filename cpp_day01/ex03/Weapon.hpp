/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:36:36 by amaach            #+#    #+#             */
/*   Updated: 2022/03/16 15:56:38 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Weapon
#define _Weapon

#include <string>
#include <iostream>
#include <iomanip>


class Weapon
{
    private:
        
        std::string _weapon;

        
    public:
        Weapon(std::string weapon_use);
        ~Weapon();
        
        std::string getType( void ) const;
        void        setType( std::string the_weapon);
};

#endif
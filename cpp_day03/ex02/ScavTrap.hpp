/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:40:08 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:07:42 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_
#define _SCAVTRAP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    
public:
    ScavTrap( void);
    ScavTrap( std::string name);
    ~ScavTrap( void );

    ScavTrap&  operator=(ScavTrap const & src );
    void    attack(const std::string& target );
    void guardGate( void );
};

#endif
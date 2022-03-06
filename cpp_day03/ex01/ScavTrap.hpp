/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:40:08 by amaach            #+#    #+#             */
/*   Updated: 2022/03/06 20:29:11 by amaach           ###   ########.fr       */
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
    void guardGate( void );
};

#endif
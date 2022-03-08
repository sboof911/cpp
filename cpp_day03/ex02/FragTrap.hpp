/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:56:17 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:10:30 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_
#define _FRAGTRAP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    
    public:
        FragTrap( void );
        FragTrap( std::string name);
        ~FragTrap();
        FragTrap&   operator=(FragTrap const & src);
        void    attack(const std::string& target );
        void    highFivesGuys(void);
};

#endif
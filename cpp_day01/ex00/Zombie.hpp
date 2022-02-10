/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:58:36 by amaach            #+#    #+#             */
/*   Updated: 2022/02/07 16:54:00 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Zombie
#define _Zombie

#include <string>
#include <iostream>
#include <iomanip>

class Zombie {


public:


    Zombie( void );
	Zombie( std::string name);
	~Zombie( void );

    void    announce( void );
private:

    std::string _name;
};
#endif
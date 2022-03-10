/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:58:36 by amaach            #+#    #+#             */
/*   Updated: 2022/03/09 13:18:19 by amaach           ###   ########.fr       */
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
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
private:

    std::string _name;
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
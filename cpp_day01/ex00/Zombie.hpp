/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:58:36 by amaach            #+#    #+#             */
/*   Updated: 2022/02/19 12:32:01 by amaach           ###   ########.fr       */
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
#endif
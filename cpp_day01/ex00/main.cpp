/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:58:47 by amaach            #+#    #+#             */
/*   Updated: 2022/03/09 13:19:30 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie* newZombie( std::string name )
// {
//     Zombie *help;
    
//     help = new Zombie(name);
//     return (help);
// }

// void randomChump( std::string name )
// {
//     Zombie   Random(name);

//     Random.announce();
// }

int     main()
{
    Zombie  First("Foo");
    Zombie  *test;

    First.announce();
    test = newZombie("Sboof");
    test->announce();
    delete test;
    randomChump("shit");
    return 0;
}
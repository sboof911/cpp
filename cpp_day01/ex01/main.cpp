/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:55:41 by amaach            #+#    #+#             */
/*   Updated: 2022/02/07 17:22:36 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* help;
    int     i = 0;

    help = new Zombie[N];
    while (i < N)
    {
        help[i].set_name(name + " " + std::to_string(i + 1));
        i++;
    }
    return (help);
}

int     main()
{
    Zombie *test;
    int i = 0;

    test = zombieHorde(10, "Sboof");
    while (i < 10)
        test[i++].announce();
    
    delete [] test;
}
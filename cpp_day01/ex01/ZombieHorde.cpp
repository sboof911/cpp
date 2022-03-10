/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:20:18 by amaach            #+#    #+#             */
/*   Updated: 2022/03/09 13:20:36 by amaach           ###   ########.fr       */
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

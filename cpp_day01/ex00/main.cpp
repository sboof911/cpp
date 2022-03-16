/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:58:47 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 22:56:01 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
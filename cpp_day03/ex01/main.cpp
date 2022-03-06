/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:40:17 by amaach            #+#    #+#             */
/*   Updated: 2022/03/06 20:41:58 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap("sboof");

    std::cout << " -------------------------  " << std::endl;

    clap.attack("samu");
    clap.takeDamage(9);
    clap.beRepaired(5);
    clap.takeDamage(50);
    clap.beRepaired(8);
    clap.takeDamage(0);

    std::cout << " -------------------------  " << std::endl;
    return (0);
}
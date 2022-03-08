/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:40:17 by amaach            #+#    #+#             */
/*   Updated: 2022/03/08 21:15:34 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // ScavTrap clap("sboof");
    // FragTrap clap2("sbooofy");
    ClapTrap *clap = new ScavTrap("sboof");
    
    clap->attack("samu");

    // std::cout << " -------------------------  " << std::endl;

    // clap.attack("samu");
    // clap.takeDamage(9);
    // clap.beRepaired(5);
    // clap.takeDamage(50);
    // clap.beRepaired(8);
    // clap.takeDamage(0);

    // std::cout << " -------------------------  " << std::endl;

    // clap2.attack("sabololo");
    // clap2.takeDamage(9);
    // clap2.beRepaired(5);
    // clap2.takeDamage(50);
    // clap2.beRepaired(8);
    // clap2.takeDamage(0);
    delete clap;

    // std::cout << " -------------------------  " << std::endl;
    return (0);
}
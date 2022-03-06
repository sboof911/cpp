/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:40:17 by amaach            #+#    #+#             */
/*   Updated: 2022/03/06 20:42:51 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("sboof");

    std::cout << " -------------------------  " << std::endl;

    clap.attack("samu");
    clap.takeDamage(9);
    clap.beRepaired(5);
    clap.takeDamage(4);
    clap.beRepaired(8);
    clap.takeDamage(0);

    std::cout << " -------------------------  " << std::endl;
    return (0);
}
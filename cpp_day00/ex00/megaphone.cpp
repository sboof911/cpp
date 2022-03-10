/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:18:43 by amaach            #+#    #+#             */
/*   Updated: 2022/02/18 14:21:32 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>

void    str_toupper(char *lower)
{
    int     i = 0;

    while (lower[i])
    {
        std::cout << (char)toupper(lower[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
            str_toupper(argv[i++]);
        std::cout << "" << std::endl;
    }
    return (0);
}
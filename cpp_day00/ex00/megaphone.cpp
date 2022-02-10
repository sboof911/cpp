/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:18:43 by amaach            #+#    #+#             */
/*   Updated: 2021/12/16 19:22:57 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>

std::string    str_toupper(char *lower)
{
    std::string  str;
    int     i = 0;

    while (lower[i])
    {
        str[i] = toupper(lower[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int     main(int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
            std::cout << str_toupper(argv[i++]) << std::endl;
    }
    return (0);
}
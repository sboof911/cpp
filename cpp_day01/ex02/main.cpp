/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:47:32 by amaach            #+#    #+#             */
/*   Updated: 2022/02/07 19:28:17 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int     main()
{
    std::string     brain = "HI THIS IS BRAIN";
    std::string*    stringPTR = &brain;
    std::string&    stringREF = brain;

    std::cout << "The memory address of the string variable is : " << &brain << std::endl;
    std::cout << "The memory address held by stringPTR is : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is : " << &stringREF << std::endl;
    std::cout << "The value of the string variable is : " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl;
}
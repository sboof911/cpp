/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:35:52 by amaach            #+#    #+#             */
/*   Updated: 2022/04/02 15:37:51 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int     main()
{
    std::vector<int> array;
    array.push_back(10);
    array.push_back(15);
    array.push_back(2);
    array.push_back(3);
    array.push_back(11);
    
    
    try
    {
        int x = easyfind(array, 2);
        std::cout << x << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    

    return 0;
}
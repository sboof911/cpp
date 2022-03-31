/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:49:54 by amaach            #+#    #+#             */
/*   Updated: 2022/03/31 15:33:30 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int     main( void )
{
    Data*   ptr = new Data;
    uintptr_t help;

    help = serialize(ptr);
    std::cout << ptr << std::endl;
    std::cout << help << " and " << &help << std::endl;
    std::cout << deserialize(help) << std::endl;
    delete ptr;

    return 0;
}
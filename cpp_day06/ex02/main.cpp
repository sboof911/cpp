/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:01:54 by amaach            #+#    #+#             */
/*   Updated: 2022/03/31 15:27:47 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base * generate(void)
{
    srand(std::time(0));
    if (rand() % 3 == 0)
    {
        Base *  ptr = new A;
        std::cout << "I m in A" << std::endl;
        return ptr;
    }
    else if (rand() % 3 == 1)
    {
        Base *  ptr = new B;
        std::cout << "I m in B" << std::endl;
        return ptr;
    }
    else
    {
        Base *  ptr = new C;
        std::cout << "I m in C" << std::endl;
        return ptr;
    }
}

void identify(Base* p)
{
    A * a = dynamic_cast<A *>(p);
    B * b = dynamic_cast<B *>(p);
    C * c = dynamic_cast<C *>(p);

    if (a == NULL)
    {
        if (b == NULL)
        {
            std::cout << "Le type de l'objet est C" << std::endl;
            return;
        }
        std::cout << "Le type de l'objet est B" << std::endl;
        return;
    }
    std::cout << "Le type de l'objet est A" << std::endl;
    return;
}

void identify(Base& p)
{
    try
    {
        A & a = dynamic_cast<A &>(p);
        std::cout << "Le type de l'objet & est A" << std::endl;
        return;
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "";
    }
    try
    {
        B & b = dynamic_cast<B &>(p);
        std::cout << "Le type de l'objet & est B" << std::endl;
        return;
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "";
    }
    try
    {
        C & c = dynamic_cast<C &>(p);
        std::cout << "Le type de l'objet & est C" << std::endl;
        return;
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "";
    }
}

int main( void )
{
    Base * ptr;

    ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return (0);
}
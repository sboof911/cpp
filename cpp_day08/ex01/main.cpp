/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:30:06 by amaach            #+#    #+#             */
/*   Updated: 2022/04/02 19:12:40 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // Span sp = Span(5);

    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);

    Span  sp = Span(10000);

    sp.addRangNumber(1, 10000);
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    
    try
    {
        Span   sp = Span(10000);
        sp.addRangNumber(0, 10000);
    }
    catch(const std::exception& e)
    {
        std::cout << "SPAN(10000) ERROR      = " << e.what() << '\n';
    }
    try
    {
        Span   sp = Span(10);
        sp.addRangNumber(0, 9);
        sp.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cout << "SPAN(10) ERROR         = " << e.what() << '\n';
    }
    try
    {
        Span   sp = Span(1);
        sp.addNumber(1);
        sp.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << "SPAN(1) LONGEST ERROR  = " << e.what() << '\n';
    }
    try
    {
        Span   sp = Span(1);
        sp.addNumber(1);
        sp.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << "SPAN(1) SHORTEST ERROR = " << e.what() << '\n';
    }
    
    return 0;
}
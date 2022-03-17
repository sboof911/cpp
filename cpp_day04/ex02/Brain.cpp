/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:50:59 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 21:50:36 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain Default Constracor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain Copy Constractor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain Destractor called" << std::endl;
}

Brain&  Brain::operator=(Brain const & src)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;

    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return *this;
}
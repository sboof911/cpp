/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:39:50 by amaach            #+#    #+#             */
/*   Updated: 2022/03/10 18:29:53 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // Brain*  brain;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // j->;
    delete j;//should not create a leak
    delete i; 

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:39:50 by amaach            #+#    #+#             */
/*   Updated: 2022/03/14 17:36:40 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << "    ------------------------" << std::endl;
    const WrongAnimal* metaa = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    const WrongAnimal* l = new WrongDog();
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    k->makeSound(); //will output the cat sound!
    l->makeSound(); //will output the dog sound!
    metaa->makeSound();
    delete metaa;
    delete l;
    delete k;
    return 0;
}
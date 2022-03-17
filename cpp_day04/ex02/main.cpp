/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:39:50 by amaach            #+#    #+#             */
/*   Updated: 2022/03/16 18:54:37 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

# define NUMBER_OF_ANIMALS 10

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i; 
    system("leaks Animal");





    // const Animal* dd = new Dog();
    // const Animal* ss = new Cat();
    // const Animal* p[100];
    // int i,j;
    // int len;
    
    // len = 4;
    // i = j = 0;
    // while (i < len/2)
    // {
    //     p[i++] = new Dog();
    // }
    
    // while (i < len)
    // {
    //     p[i++] = new Cat();
    // }
    
    // while (j < len)
    // {
    //     delete p[j++];
    // }
    
    // ss->makeSound();
    // dd->makeSound();   
    // delete dd;//should not create a leak
    // delete ss;




    
   	// Animal	*animals[NUMBER_OF_ANIMALS];
	// Brain	*brain;

	// for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	// {
	// 	if (i < NUMBER_OF_ANIMALS / 2)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// 	std::cout << animals[i]->getType() << std::endl;
	// }

	// brain = animals[7]->getBrain();
    // brain->ideas[0] = "0";
	// brain->ideas[1] = "1";
	// brain->ideas[2] = "2";
	// brain->ideas[3] = "3";
    // std::cout << "-------------------------" << std::endl;
	// std::cout << animals[7]->getBrain()->ideas[0] << std::endl;

    
	// std::cout << animals[7]->getBrain()->ideas[3] << std::endl;
    // Dog sboof;
    // {
    //     Dog tmp = sboof;
    // }

	// for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	// 	delete animals[i];
    return 0;
    system("leaks Animal");
}

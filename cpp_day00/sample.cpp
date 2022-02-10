/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:11:39 by amaach            #+#    #+#             */
/*   Updated: 2021/12/14 00:04:32 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.hpp"

Sample::Sample(int i, float f): a1(i), b2(f)
{
	std::cout <<"Constrator Called" << std::endl;
	std::cout << "int is : " << this->a1 << std::endl;
	std::cout << "float is : " << this->b2 << std::endl;
	
	return;
}

Sample::~Sample( void) {
	std::cout << "Destroctor Called" << std::endl;
	return;
}
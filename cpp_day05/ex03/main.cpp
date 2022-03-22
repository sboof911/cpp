/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:39:43 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 13:27:59 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Form			*form = NULL;
	BureauCrat		bob("bob", 1);
	BureauCrat		phil("phil", 40);
	BureauCrat		luc("luc", 150);

	std::cout << "--------------------------------------" << std::endl;
	try
	{
		form = new PresidentialPardonForm("28Z");
		form->execute(bob);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}

	std::cout << "--------------------------------------" << std::endl;
	try
	{
		form = new PresidentialPardonForm("28A");
		form->beSigned(bob);
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}


	std::cout << "--------------------------------------" << std::endl;
	try
	{
		form = new RobotomyRequestForm("28B");
		form->beSigned(bob);
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}


	std::cout << "--------------------------------------" << std::endl;
	try
	{
		form = new ShrubberyCreationForm("28C");
		form->beSigned(bob);
		form->execute(phil);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}
	std::cout << "--------------------------------------" << std::endl;

	return 0;
}

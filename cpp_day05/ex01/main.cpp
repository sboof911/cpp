/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:39:43 by amaach            #+#    #+#             */
/*   Updated: 2022/03/21 17:12:03 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        BureauCrat sboof("Sboof", 119);
        Form form("wati9at l2isti9lal", 120, 110);
        form.beSigned(sboof);
        sboof.signForm(form);
        std::cout << form.isSigned() << std::endl;
        std::cout << form.getName() << std::endl;
        std::cout << form.getGradeSign() << std::endl;
        std::cout << form << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}

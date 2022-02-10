/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:13:58 by amaach            #+#    #+#             */
/*   Updated: 2021/12/20 13:15:39 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PhoneBook
#define _PhoneBook

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    
    public:
        PhoneBook();
        ~PhoneBook( void);

        void	ADD_contact( int i );
        void    SEARCH_contact( int i );

    private:
		Contact	Contact[8];
};

#endif
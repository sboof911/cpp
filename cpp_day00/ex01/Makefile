# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:35:59 by amaach            #+#    #+#              #
#    Updated: 2022/03/06 17:01:45 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp PhoneBook.cpp main.cpp 

FLAGS = -Wall -Wextra -Werror -fsanitize=address

NAME = PhoneBook

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	

fclean : clean
	rm -f $(NAME)

re : fclean all

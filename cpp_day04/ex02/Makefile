# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 14:44:51 by amaach            #+#    #+#              #
#    Updated: 2022/03/14 18:00:06 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

FLAGS = -Wall -Wextra -Werror #-fsanitize=address

NAME = Animal
#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

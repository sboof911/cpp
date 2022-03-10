# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 16:47:27 by amaach            #+#    #+#              #
#    Updated: 2022/03/09 13:11:24 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp

FLAGS = -Wall -Wextra -Werror

NAME = ScavTrap
#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
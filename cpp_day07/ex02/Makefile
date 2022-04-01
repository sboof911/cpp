# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 21:47:59 by amaach            #+#    #+#              #
#    Updated: 2022/04/01 00:12:43 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

FLAGS = -Wall -Wextra -Werror

NAME = Array
#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
		c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
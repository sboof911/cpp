# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 15:23:06 by amaach            #+#    #+#              #
#    Updated: 2022/03/31 15:30:45 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Data.cpp

FLAGS = -Wall -Wextra -Werror -Wno-unused

NAME = serial
#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
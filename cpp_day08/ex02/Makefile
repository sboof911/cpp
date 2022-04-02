# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 21:28:37 by amaach            #+#    #+#              #
#    Updated: 2022/04/02 21:28:44 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Mutan
#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
		c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
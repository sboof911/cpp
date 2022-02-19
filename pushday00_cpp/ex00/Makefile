# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 22:07:15 by amaach            #+#    #+#              #
#    Updated: 2022/02/19 11:36:18 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

NAME = megaphone

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 00:51:39 by amaach            #+#    #+#              #
#    Updated: 2022/03/21 16:26:07 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = BureauCrat.cpp main.cpp Form.cpp

FLAGS = -Wall -Wextra -Werror

NAME = BureauCrat
#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
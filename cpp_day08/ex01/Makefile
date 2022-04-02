# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 15:40:26 by amaach            #+#    #+#              #
#    Updated: 2022/04/02 18:57:04 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Span.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Span
#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
		c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
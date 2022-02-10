# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 22:07:15 by amaach            #+#    #+#              #
#    Updated: 2021/11/28 22:15:27 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

NAME = megaphone

#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
	g++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 11:58:44 by amaach            #+#    #+#              #
#    Updated: 2022/02/19 12:30:03 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

FLAGS = -Wall -Wextra -Werror

NAME = Zombie

#OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

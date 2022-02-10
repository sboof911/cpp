# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 14:14:33 by amaach            #+#    #+#              #
#    Updated: 2022/02/10 14:16:42 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS =  -Wall -Wextra -Werror -g -fsanitize=address


NAME = Humans

SRC =  	main.cpp HumanA.cpp Weapon.cpp
		
OBJS = $(SRCS:%.c=%.o)

all:	$(NAME)

$(NAME) : $(SRC)
	c++  $(FLAGS) $(LEAKS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJS)


fclean:	clean
	rm -f $(NAME)

re:		fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 13:31:42 by amaach            #+#    #+#              #
#    Updated: 2022/03/16 15:37:29 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS =  -Wall -Wextra -Werror -std=c++98


NAME = Karen

SRC =  	main.cpp Karen.cpp
		
OBJS = $(SRCS:%.c=%.o)

all:	$(NAME)

$(NAME) : $(SRC)
	c++  $(FLAGS) $(LEAKS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJS)


fclean:	clean
	rm -f $(NAME)

re:		fclean all
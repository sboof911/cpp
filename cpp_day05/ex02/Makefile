# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaach <amaach@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 00:51:39 by amaach            #+#    #+#              #
#    Updated: 2022/03/22 18:42:08 by amaach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = BureauCrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp \
		Intern.cpp

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
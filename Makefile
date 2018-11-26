# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jackson <jbeall@student.42.us.org>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/24 20:44:47 by jackson           #+#    #+#              #
#    Updated: 2018/11/25 22:22:36 by jackson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sastantua
FLAGS = -Wall -Werror -Wextra
SRC = ./src/main.c ./src/sastantua.c ./src/ft_putchar.c ./src/ft_atoi.c 
INCLUDES = ./includes

$(NAME):
	@echo "building binary..."
	@gcc -o $(NAME) $(FLAGS) $(SRC) -I$(INCLUDES)
	@echo "\033[92mdone!\033[0m"
all: $(NAME)
clean:
	@echo "cleaning..."
	@rm -rf $(NAME)
	@echo "\033[92mbinary removed!\033[0m"
re: clean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 14:34:51 by mmomeni           #+#    #+#              #
#    Updated: 2024/02/28 13:23:18 by mmomeni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			c++
NAME=		polymorphism
CFLAGS=		-Wall -Wextra -Werror -std=c++98
FUNCS=		Animal.cpp Cat.cpp Dog.cpp
SRCS=		main.cpp $(FUNCS)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

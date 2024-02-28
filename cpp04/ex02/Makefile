# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 14:34:51 by mmomeni           #+#    #+#              #
#    Updated: 2024/02/28 15:58:20 by mmomeni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			c++
NAME=		abstract
CFLAGS=		-Wall -Wextra -Werror -std=c++98
FUNCS=		Animal.cpp Cat.cpp Dog.cpp Brain.cpp
SRCS=		main.cpp $(FUNCS)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -fsanitize=address -g
debug: all

.PHONY: all clean fclean re bonus

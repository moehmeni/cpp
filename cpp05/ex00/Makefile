# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 13:55:18 by mmomeni           #+#    #+#              #
#    Updated: 2024/05/02 16:34:37 by mmomeni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			c++
NAME=		bur
CFLAGS=		-Wall -Wextra -Werror -std=c++98
FUNCS=		Bureaucrat.cpp
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

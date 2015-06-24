# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsautron <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/24 09:02:53 by bsautron          #+#    #+#              #
#    Updated: 2015/06/24 17:58:00 by bsautron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
NAME = whatever
CFLAGS = -Wextra -Wall -Werror

SRC_MAIN = whatever.cpp

SRC = $(SRC_MAIN)

OBJ = $(SRC:%.cpp=.obj/%.o)

OBJ_DIR = .obj/

.PHONY: all, clean, fclean, re

all: dor $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $@ $^
	@echo "\033[32mReady!\033[0m"

dor:
	@mkdir $(OBJ_DIR) 2> /dev/null || env -i

.obj/%.o: %.cpp
	@echo "\033[33m 	$<"
	@$(CC) $(CFLAGS) -o $@ -c $< -g

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_DIR) 2> /dev/null || env -i

fclean: clean
	@rm -f $(NAME)

re: fclean all

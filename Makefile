# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 11:55:42 by judecuyp          #+#    #+#              #
#    Updated: 2025/01/27 16:03:02 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLLEEN = Colleen

NAME = $(COLLEEN)

SRC_COLLEEN = Colleen.c

OBJ_COLLEEN = $(SRC_COLLEEN:.c=.o)

CC = clang -Wall -Wextra -Werror 

all: $(NAME)

$(OBJ_COLLEEN): $(SRC_COLLEEN)
	$(CC) -c $(SRC_COLLEEN)

clean:
	rm -rf $(OBJ_COLLEEN)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re


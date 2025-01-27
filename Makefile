# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 11:55:42 by judecuyp          #+#    #+#              #
#    Updated: 2025/01/27 16:35:38 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen Grace

SRC_COLLEEN = Colleen.c
SRC_GRACE = Grace.c

OBJ_COLLEEN = $(SRC_COLLEEN:.c=.o)
OBJ_GRACE = $(SRC_GRACE:.c=.o)

CC = clang -Wall -Wextra -Werror 

all: $(NAME)

$(OBJ_COLLEEN): $(SRC_COLLEEN)
	$(CC) -c $(SRC_COLLEEN)

$(OBJ_GRACE): $(SRC_GRACE)
	$(CC) -c $(SRC_GRACE)

clean:
	rm -rf $(OBJ_COLLEEN)
	rm -rf $(OBJ_GRACE)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re


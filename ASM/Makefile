# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 08:56:52 by judecuyp          #+#    #+#              #
#    Updated: 2025/01/28 12:16:09 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen

SRC_COLLEEN = Colleen.s
CC = nasm -f elf64
LINKER = ld --dynamic-linker /lib/x86_64-linux-gnu/ld-linux-x86-64.so.2 -lc

all:$(NAME)

$(NAME): $(SRC_COLLEEN)
	$(CC) $(SRC_COLLEEN)
	$(LINKER) -o Colleen Colleen.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
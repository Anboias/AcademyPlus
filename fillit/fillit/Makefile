# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: biasinov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/16 20:58:01 by biasinov          #+#    #+#              #
#    Updated: 2017/01/18 13:11:46 by biasinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fillit

SRC=create_map.c error_exit.c fillit.c main.c find_next_position.c \
ft_putendl.c print_map.c get_pieces_from_buff.c valid_tetriminos.c

OBJ=$(addprefix $(OBJDIR),$(SRC:.c=.o))

CC=gcc
FLAGS=-Wall -Wextra -Werror

SRCDIR=./src/
OBJDIR=./obj/
INCDIR=./includes/

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

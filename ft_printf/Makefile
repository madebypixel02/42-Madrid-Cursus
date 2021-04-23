# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 09:03:14 by aperez-b          #+#    #+#              #
#    Updated: 2021/04/23 11:10:33 by aperez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CC = gcc
AR = ar rcs
LIBFT = libft
NAME = libftprintf.a
SRC_M = ft_printf.c ft_format.c ft_parse.c	\
ft_print_chars.c ft_print_nbrs.c			
#ft_print_hex.c
SRC_B = 
OBJ_M = $(SRC_M:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME) $(LIBFT)

$(NAME): $(OBJ_M) $(LIBFT).a
	$(AR) $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	$(CC) $(CFLAGS) -c $(SRC_M)

bonus: $(OBJ_B) $(OBJ_M)
	$(AR) $(NAME) $(OBJ_B) $(OBJ_M)

$(OBJ_B): $(SRC_B)
	$(CC) $(CFLAGS) -c $(SRC_B)

$(LIBFT).a:
	make all -C $(LIBFT)
	cp $(LIBFT)/$(LIBFT).a $(NAME)

test: $(NAME)
	$(CC) -c tests/main.c
	$(CC) $(NAME) main.o && ./a.out | cat -e
	$(RM) main.o

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
	$(RM) $(LIBFT)/$(LIBFT).a
	$(RM) $(NAME)

git:
	git add ../.
	git commit -m "$(m)"
	git push

re: fclean all

.PHONY: all clean fclean bonus re git

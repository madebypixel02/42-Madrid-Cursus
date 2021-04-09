# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 19:30:31 by aperez-b          #+#    #+#              #
#    Updated: 2021/04/09 20:21:32 by aperez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_memset.c ft_memcmp.c ft_memchr.c	\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c	\
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c	ft_memcpy.c		\
ft_memccpy.c ft_memmove.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c	\
ft_bzero.c ft_calloc.c ft_strtrim.c ft_strmapi.c main.c
HEADERS = libft.h
OBJ = $(SRC:.c=.o)
CC	= cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

clean:
	$(RM) $(OBJ) libft.so

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	
	clean
	fclean
	all
	re

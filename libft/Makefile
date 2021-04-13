# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 19:30:31 by aperez-b          #+#    #+#              #
#    Updated: 2021/04/13 11:09:45 by aperez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_M = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_memset.c ft_memcmp.c ft_memchr.c	\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c	\
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c	ft_memcpy.c		\
ft_memccpy.c ft_memmove.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c	\
ft_bzero.c ft_strtrim.c ft_strmapi.c ft_isspace.c ft_nbrlen.c ft_calloc.c		\

SRC_B = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c		\
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c	\
ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ_M = $(SRC_M:.c=.o)
OBJ_B = $(SRC_B:.c=.o)
CC	= cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ_M)
	ar rc $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	$(CC) $(CFLAGS) -c $(SRC_M)

bonus : $(OBJ_M) $(OBJ_B)
	ar rc $(NAME) $(OBJ_B)

$(OBJ_B): $(SRC_B)
	$(CC) $(CFLAGS) -c $(SRC_B)

so:
	$(CC) -fPIC $(CFLAGS) $(SRC_M) $(OBJ_B) main.c
	gcc -shared -o libft.so $(OBJ_M) $(OBJ_B)

clean:
	$(RM) $(OBJ_M) $(OBJ_B) libft.so

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	
	clean
	fclean
	all
	re

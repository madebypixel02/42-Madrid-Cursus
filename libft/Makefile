# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 10:28:33 by aperez-b          #+#    #+#              #
#    Updated: 2021/07/07 11:48:03 by aperez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color Aliases
DEFAULT = \033[0;39m
GRAY = \033[1;90m
RED = \033[1;91m
GREEN = \033[1;92m
YELLOW = \033[1;93m
BLUE = \033[1;94m
MAGENTA = \033[1;95m
CYAN = \033[1;96m
WHITE = \033[1;97m

UNAME = $(shell uname -s)
ECHO = echo
ifeq ($(UNAME), Linux)
	ECHO = echo -e
endif
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
HEADER = libft.h

SRC_M =	ft_atoi.c	\
	ft_bzero.c		\
	ft_calloc.c		\
	ft_nbrlen.c		\
	ft_isspace.c	\
	ft_itoa.c		\
	ft_uitoa.c		\
	ft_memccpy.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memmove.c	\
	ft_memset.c		\
	ft_split.c		\
	ft_strchr.c		\
	ft_strdup.c		\
	ft_strjoin.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strmapi.c	\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strtrim.c	\
	ft_substr.c		\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_putchar_fd.c	\
	ft_putnchar_fd.c\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
	ft_putstrn_fd.c	\
	ft_max.c

SRC_B = ft_lstadd_back.c\
	ft_lstadd_front.c	\
	ft_lstclear.c		\
	ft_lstdelone.c		\
	ft_lstiter.c		\
	ft_lstlast.c		\
	ft_lstsize.c		\
	ft_lstnew.c			\
	ft_lstmap.c

OBJ_M = $(SRC_M:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)
	@$(ECHO) "$(GREEN)$(NAME) Compilation Complete!$(DEFAULT)"

$(NAME) : $(OBJ_M)
	@$(ECHO) "$(BLUE)Compiling $(NAME)...$(DEFAULT)"
	@$(AR) $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	@$(ECHO) "$(RED)Mandatory objects outdated in libft! Rebuilding...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_M)

bonus: $(OBJ_M) $(OBJ_B)
	@$(AR) $(NAME) $(OBJ_M) $(OBJ_B)
	@$(ECHO) "$(GREEN)Bonuses Compilation Complete in libft!$(DEFAULT)"

$(OBJ_B): $(SRC_B)
	@$(ECHO) "$(RED)Bonus objects outdated in libft! Rebuilding...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_M) $(SRC_B)

clean:
	@$(ECHO) "$(BLUE)Cleaning up object files in libft...$(DEFAULT)"
	@$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "$(CYAN)Removed $(NAME)$(DEFAULT)"

re: fclean all
	@$(ECHO) "$(YELLOW)Cleaned and Rebuilt Everything for $(NAME)!$(DEFAULT)"

.PHONY: all bonus clean fclean re 

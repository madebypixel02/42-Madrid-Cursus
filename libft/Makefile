# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 10:28:33 by aperez-b          #+#    #+#              #
#    Updated: 2021/07/07 10:48:06 by aperez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color Aliases
DEFAULT="\\e[39m"
GRAY="\\e[90m"
RED="\\e[91m"
GREEN="\\e[92m"
YELLOW="\\e[93m"
BLUE="\\e[94m"
MAGENTA="\\e[95m"
CYAN="\\e[96m"
WHITE="\\e[97m"

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
	@echo -e "$(GREEN)$(NAME) Compilation Complete!$(DEFAULT)"

$(NAME) : $(OBJ_M)
	@echo -e "$(BLUE)Compiling $(NAME)...$(DEFAULT)"
	@$(AR) $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	@echo -e "$(RED)Mandatory objects outdated in libft! Rebuilding...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_M)

bonus: $(OBJ_M) $(OBJ_B)
	@$(AR) $(NAME) $(OBJ_M) $(OBJ_B)
	@echo -e "$(GREEN)Bonuses Compilation Complete in libft!$(DEFAULT)"

$(OBJ_B): $(SRC_B)
	@echo -e "$(RED)Bonus objects outdated in libft! Rebuilding...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_M) $(SRC_B)

clean:
	@echo -e "$(BLUE)Cleaning up object files in libft...$(DEFAULT)"
	@$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
	@$(RM) $(NAME)
	@echo -e "$(CYAN)Removed $(NAME)$(DEFAULT)"

re: fclean all
	@echo -e "$(YELLOW)Cleaned and Rebuilt Everything for $(NAME)!$(DEFAULT)"

.PHONY: all bonus clean fclean re 

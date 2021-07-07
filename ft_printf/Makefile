# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 09:03:14 by aperez-b          #+#    #+#              #
#    Updated: 2021/07/07 13:56:04 by aperez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color Aliases
DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

UNAME = $(shell uname -s)
ECHO = echo
ifeq ($(UNAME), Linux)
	ECHO = echo -e
endif
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CC = gcc
AR = ar rcs
LIBFT = libft.a
NAME = libftprintf.a
SRC_M = ft_printf.c ft_format.c ft_parse.c	\
ft_print_chars.c ft_print_nbrs.c			\
ft_print_hex.c
# SRC_B = $(SRC_M:.c=_bonus.c)
OBJ_M = $(SRC_M:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)
	@$(ECHO) "$(GREEN)$(NAME) Compilation Complete!$(DEFAULT)"

$(NAME): $(OBJ_M) $(LIBFT)
	@$(AR) $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	@$(ECHO) "$(RED)Mandatory objects outdated in ft_printf! Compiling again...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_M)

bonus: $(OBJ_B) $(OBJ_M)
	@$(AR) $(NAME) $(OBJ_B) $(OBJ_M)
	@$(ECHO) "$(GREEN)Bonuses Compilation Complete in ft_printf!$(DEFAULT)"

$(OBJ_B): $(SRC_B)
	@$(ECHO) "$(RED)Bonus objects outdated in ft_printf! Compiling again...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_B)

$(LIBFT):
	@make all -C libft
	@cp libft/$(LIBFT) $(NAME)

test: all
	@$(ECHO) "$(YELLOW)Performing test with custom main...$(DEFAULT)"
	@$(CC) -c tests/main.c
	@$(CC) main.o $(NAME)
	./a.out $(UNAME) | cat -e
	@$(RM) main.o a.out
	@$(ECHO) "$(GREEN)Test Complete!$(DEFAULT)"

clean:
	@$(ECHO) "$(BLUE)Cleaning up object files in ft_printf...$(DEFAULT)"
	@make clean -C libft
	@$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
	@$(RM) $(LIBFT)
	@$(RM) libft/$(LIBFT)
	@$(RM) $(NAME)
	@$(ECHO) "$(CYAN)Removed $(NAME)$(DEFAULT)"
	@$(ECHO) "$(CYAN)Removed $(LIBFT)$(DEFAULT)"

git:
	git add ../.
	git commit
	git push

re: fclean all
	@$(ECHO) "$(YELLOW)Cleaned and Rebuilt Everything for $(NAME)!$(DEFAULT)"

.PHONY: all clean fclean bonus re git

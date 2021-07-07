# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 09:03:14 by aperez-b          #+#    #+#              #
#    Updated: 2021/07/07 10:58:15 by aperez-b         ###   ########.fr        #
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

UNAME = $(shell uname -s)
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CC = gcc
AR = ar rcs
LIBFT = libft.a
NAME = libftprintf.a
SRC_M = ft_printf.c ft_format.c ft_parse.c	\
ft_print_chars.c ft_print_nbrs.c			\
ft_print_hex.c ft_print_other.c
# SRC_B = $(SRC_M:.c=_bonus.c)
OBJ_M = $(SRC_M:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)
	@echo -e "$(GREEN)$(NAME) Compilation Complete!$(DEFAULT)"

$(NAME): $(OBJ_M) $(LIBFT)
	@echo -e "$(BLUE)Compiling $(NAME)...$(DEFAULT)"
	@$(AR) $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	@echo -e "$(RED)Mandatory objects outdated in ft_printf! Rebuilding...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_M)

bonus: $(OBJ_B) $(OBJ_M)
	@$(AR) $(NAME) $(OBJ_B) $(OBJ_M)
	@echo -e "$(GREEN)Bonuses Compilation Complete in ft_printf!$(DEFAULT)"

$(OBJ_B): $(SRC_B)
	@echo -e "$(RED)Bonus objects outdated in ft_printf! Rebuilding...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_B)

$(LIBFT):
	@make all -C libft
	@cp libft/$(LIBFT) $(NAME)

test: all
	@echo -e "$(YELLOW)Performing test with custom main...$(DEFAULT)"
	@$(CC) -c tests/main.c
	@$(CC) main.o $(NAME)
	./a.out $(UNAME) | cat -e
	@$(RM) main.o a.out
	@echo -e "$(GREEN)Test Complete!$(DEFAULT)"

clean:
	@echo -e "$(BLUE)Cleaning up object files in ft_printf...$(DEFAULT)"
	@make clean -C libft
	@$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
	@$(RM) $(LIBFT)
	@$(RM) libft/$(LIBFT)
	@$(RM) $(NAME)
	@echo -e "$(CYAN)Removed $(NAME)$(DEFAULT)"
	@echo -e "$(CYAN)Removed $(LIBFT)$(DEFAULT)"

git:
	git add ../.
	git commit
	git push

re: fclean all
	@echo -e "$(YELLOW)Cleaned and Rebuilt Everything for $(NAME)!$(DEFAULT)"

.PHONY: all clean fclean bonus re git

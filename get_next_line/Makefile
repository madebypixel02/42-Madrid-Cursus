# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 13:09:10 by aperez-b          #+#    #+#              #
#    Updated: 2021/07/11 09:12:49 by aperez-b         ###   ########.fr        #
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
AR = ar rcs
CC = gcc
NAME = get_next_line.a

SRC_M = mandatory/get_next_line.c			\
		mandatory/get_next_line_utils.c	

SRC_B = bonus/get_next_line_bonus.c				\
		bonus/get_next_line_utils_bonus.c

OBJ_M = lib/get_next_line.o					\
		lib/get_next_line_utils.o

OBJ_B = lib/get_next_line_bonus.o					\
		lib/get_next_line_utils_bonus.o

all: $(NAME)
	@$(ECHO) "$(GREEN)$(NAME) Compilation Complete!$(DEFAULT)"

$(NAME): $(OBJ_M)
	@$(AR) $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	@$(ECHO) "$(RED)Mandatory objects outdated in get_next_line! Compiling again...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_M)
	@mv -f get_next_line.o get_next_line_utils.o lib/ 

bonus: $(OBJ_B)
	@$(AR) $(NAME) $(OBJ_B)
	@$(ECHO) "$(MAGENTA)Bonuses Compilation Complete in get_next_line!$(DEFAULT)"

$(OBJ_B): $(SRC_B)
	@$(ECHO) "$(RED)Bonus objects outdated in get_next_line! Compiling again...$(DEFAULT)"
	@$(CC) $(CFLAGS) -c $(SRC_B)
	@mv -f get_next_line_bonus.o get_next_line_utils_bonus.o lib/

test: all
	@$(ECHO) "$(YELLOW)Performing test with custom main...$(DEFAULT)"
	@$(CC) -c tests/main.c
	@$(CC) main.o $(NAME)
	./a.out $(UNAME) | cat -e
	@$(RM) main.o a.out
	@$(ECHO) "$(GREEN)Test Complete!$(DEFAULT)"

clean:
	@$(ECHO) "$(BLUE)Cleaning up object files in get_next_line...$(DEFAULT)"
	@$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "$(CYAN)Removed $(NAME)$(DEFAULT)"

norminette:
	@$(ECHO) "$(CYAN)Checking norm for get_next_line...$(DEFAULT)"
	@norminette -R CheckForbiddenSourceHeader $(SRC_M) $(SRC_B) lib/get_next_line.h

git:
	git add ../.
	git commit
	git push origin beta

re: fclean all
	@$(ECHO) "$(YELLOW)Cleaned and Rebuilt Everything for $(NAME)!$(DEFAULT)"

.PHONY: all clean fclean bonus re git

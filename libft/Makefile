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

$(NAME) : $(OBJ_M)
	$(AR) $(NAME) $(OBJ_M)

$(OBJ_M): $(SRC_M)
	$(CC) $(CFLAGS) -c $(SRC_M)

bonus: $(OBJ_M) $(OBJ_B)
	$(AR) $(NAME) $(OBJ_M) $(OBJ_B)

$(OBJ_B): $(SRC_B)
	$(CC) $(CFLAGS) -c $(SRC_M) $(SRC_B)

clean:
	$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re 

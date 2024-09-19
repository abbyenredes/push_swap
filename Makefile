SOURCES = src/main.c
NAME = push_swap
RM = rm -rf
CC = gcc
LIBFT_DIR = ./Libft
INCLUDE_P = -I include
CFLAGS = -Wall -Wextra -Werror $(INCLUDE_P)
OBJ = $(SOURCES:.c=.o)
LIBFT = /libft.a
all: $(NAME)

$(NAME) : $(OBJ) 
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -L$(LIBFT_DIR) $(OBJ) $(LIBFT_DIR)$(LIBFT) -o $(NAME)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJ)

fclean :  clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.silent:
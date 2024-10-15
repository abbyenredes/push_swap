
SRC =	src/main.c\
		src/create_stack.c\
		src/sorting_numbers.c\
		src/parse.c\
		src/hardcode.c 


UTILS = src/utils/free_stack.c \
		src/utils/print_stacks.c \
		src/utils/stack_add_back.c \
		src/utils/stack_new.c \
		src/utils/is_it_order.c \
		src/utils/get_stack_size.c \
		src/utils/ft_free.c \
		src/utils/stack_last.c

OPERATIONS =	src/operations/swap.c\
				src/operations/push.c\
				src/operations/rotate.c\
				src/operations/reverse_rotate.c

SOURCES = $(SRC) $(UTILS) $(OPERATIONS)
NAME = push_swap
RM = rm -rf
CC = gcc
LIBFT_DIR = ./Libft
INCLUDE_P = -I include
CFLAGS = -Wall -Wextra -Werror $(INCLUDE_P) -fsanitize=address -g3
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
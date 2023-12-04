NAME = libftprintf.a
TARGET = program

LIBFT_DIR = ./libft
SRC_DIR = ./include

HEADER_DIR = $(SRC_DIR)printf.h
CFLAGS = -Wall -Wextra -Werror


SRC_SRC = $(SRC_DIR)ft_printf.c 
SRC_OBJ = $(SRC_SRC:.c=.o)

all: $(NAME)

clean:
	rm -f $(LIBFT_OBJ) $(SRC_OBJ) $(MAIN_SRC:.c=.o)

fclean: clean
	rm -rf $(TARGET) $(LIBFT_DIR)$(NAME)

re: fclean all

.PHONY: all clean fclean re

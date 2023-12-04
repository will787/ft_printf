LIBFT_DIR = libft
SRC_DIR = src
HEADER_DIR = $(SRC_DIR)printf.h $(SRC_DIR)libft.h

TARGET = program
name = libftprintf.a

LIBFT_SRC = $(LIBFT_DIR)ft_putnbr_fd.c $(LIBFT_DIR)ft_putchar_fd.c
SRC_SRC = $(SRC_DIR)ft_printf.c
MAIN_SRC = main.c 

LIBFT_OBJ = $(LIBFT_SRC:.c=.o)
SRC_OBJ = $(SRC_SRC:.c=.o)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

LINKER = gcc
CC = $(LINKER)

all: $(TARGET)

$(TARGET): $(LIBFT_OBJ) $(SRC_OBJ) $(MAIN_SRC:.c=.o)
	$(LINKER) $^ -o $(TARGET) -L$(LIBFT_DIR) -libftprintf

$(LIBFT_OBJ): $(LIBFT_SRC)
	$(CC) $(FLAGS) $(LFLAGS) -c $^ -o $@

$(SRC_OBJ): $(SRC_SRC)
	$(CC) $(FLAGS) $(LFLAGS) -c $^ -o $@

$(MAIN_SRC:.c=.o): $(MAIN_SRC)
	$(CC) $(FLAGS) $(LFLAGS) -c $^ -o $@

$(LIBFT_DIR)$(name): $(LIBFT_OBJ)
	ar rcs $@ $^

clean:
	rm -f $(LIBFT_OBJ) $(SRC_OBJ) $(MAIN_SRC:.c=.o)

fclean: clean
	rm -rf $(TARGET) $(LIBFT_DIR)$(name)

re: fclean all

.PHONY: all clean fclean re

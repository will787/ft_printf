NAME = libftprintf.a
EXECUTABLE = program

LIBFT_DIR = ./libft
HEADER_DIR = 
SRC_DIR = ./src
OBJ_DIR = ./obj
V_PATH = ./obj

HEADER = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
AR = ar rcs
RM = rm -rf

LIBFT = $(LIBFT_DIR)/libft.a
SRCS = $(SRC_DIR)ft_printf.c $(SRC_DIR)ft_putnbr.c

SRC_OBJ = $(SRC:.c=.o)
OBJS = $(SRCS:$(SRC_DIR)%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

%.o: src/%.c $(HEADER) | $(OBJ_DIR)
	echo $<
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: src/%.c $(HEADER) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	 	$(LIBFT) $(OBJ_DIR) $(OBJS)
			cp 	$(LIBFT) $(NAME) $(SRC)
				$(AR) $(NAME) $(LIBFT) $(OBJS)
$(LIBFT):
			make -C $(LIBFT_DIR) all

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

clean:
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJ_DIR)

fclean: clean
			make -C $(LIBFT_DIR) fclean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
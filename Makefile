name = libftprintf.a
executable = program

LIBFT_DIR = ./libft
SRC_DIR = ./src

LIBFT = $(LIBFT)libft.a
SRC = $(SRC_DIR)ft_printf.c
SRCS = $(addsuffix .c,  $(SRC))

OBJ_DIR = obj
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

CFLAGS = -Wall -Wextra -Werror

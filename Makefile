NAME = libftprintf.a
TARGET = program

LIBFT_DIR = ./libft
HEADER_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = obj

HEADER = $(HEADER_DIR)printf.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
AR = ar rcs
RM = rm -rf

LIBFT = $(LIBFT_DIR)/libft.a
SRC = $(SRC_DIR)ft_printf.c 
SRCS = $(addsuffix .c, $(SRC))

SRC_OBJ = $(SRC_SRC:.c=.o)
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME):	 	$(LIBFT) $(SRC) $(OBJS)
			cp 	$(LIBFT) $(NAME)
				$(AR) $(NAME) $(LIBFT) $(OBJS)
$(LIBFT):
			make -C $(LIBFT_DIR) all

$(OBJ_DIR):
			mkdir ip $(OBJ_DIR)

clean:
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJ_DIR)

fclean: clean
			make -C $(RM) $(NAME) $(LIBFT_DIR) fclean
			$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re

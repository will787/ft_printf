NAME = libftprintf.a
LIBFT_DIR = ./lib
SRC_DIR = ./src

HEADER = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
AR = ar rcs
RM = rm -rf

LIBFT = $(LIBFT_DIR)/libft.a

SRCS = $(SRC_DIR)/ft_printf.c \
		$(SRC_DIR)/ft_putnbr.c \
		$(SRC_DIR)/ft_utoa.c \
		$(SRC_DIR)/ft_uputnbr.c \
		$(SRC_DIR)/ft_puthex_def.c \
		$(SRC_DIR)/ft_putpointer.c \
		$(SRC_DIR)/ft_puthex_pointer.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	 	$(LIBFT) $(OBJ)
			cp 	$(LIBFT) $(NAME)
				$(AR) $(NAME) $(LIBFT) $(OBJ)
$(LIBFT):
			make -C $(LIBFT_DIR)

clean:
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJ)

fclean: clean
			make -C $(LIBFT_DIR) fclean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
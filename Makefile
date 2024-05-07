NAME = libftprintf.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SOURCES = \
			ft_character.c \
			ft_hexa.c \
			ft_integer.c \
			ft_printf.c \
			ft_string.c \
			ft_unsigned.c \
			ft_void_pointer.c
OBJECTS = $(SOURCES:.c=.o)
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEADER) $< -o $@

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJECTS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
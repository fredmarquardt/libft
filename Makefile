CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCE = ft_memcpy.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_atoi.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strlen.c ft_calloc.c\
ft_strdup.c ft_itoa.c ft_substr.c ft_strjoin.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_split.c ft_strmapi.c ft_memchr.c ft_putnbr_fd.c ft_memmove.c ft_memset.c ft_memcmp.c ft_strtrim.c
OBJ = $(SOURCE:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): objfiles
	ar -rcv libft.a $(OBJ)

objfiles:
	$(CC) $(CFLAGS) -c $(SOURCE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re

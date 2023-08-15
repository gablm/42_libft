NAME=libft.a
COMPILER=cc
FLAGS=-Wall -Wextra -Werror
FILES= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	\
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_putchar.c ft_putstr.c ft_putnbr.c \
	ft_swap.c ft_isblank.c ft_isspace.c
OBJS=$(FILES:.c=.o)

all: $(NAME)

%.o : %.c
	@$(COMPILER) $(FLAGS) -c $*.c -o $*.o

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -fr $(OBJS)

fclean:
	rm -fr $(OBJS) libft.a

re: fclean all

dotest: all
	@rm -fr test $(OBJS)
	@$(COMPILER) $(FLAGS) ztest.c -o test -L. -lft
	@clear
	@./test

cleantest:
	rm -fr test

.PHONY: clean re fclean all 
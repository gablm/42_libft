NAME=libft.a
COMPILER=cc
FLAGS=-Wall -Wextra -Werror
FILES=ft_strlen.c ft_strdup.c \
	ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_putchar.c ft_putstr.c ft_putnbr.c\
	ft_swap.c
OBJS=$(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -fr $(OBJS)

fclean:
	rm -fr $(OBJS) libft.a

re: fclean all

dotest: cleantest
	$(COMPILER) $(FLAGS) ztest.c -o test -L. -lft

cleantest:
	rm -fr test

.PHONY: clean re fclean all 
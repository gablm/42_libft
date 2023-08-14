NAME=libft.a
COMPILER=cc
FLAGS=-Wall -Wextra -Werror
FILES=ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
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
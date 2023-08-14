NAME=libft.a
COMPILER=cc
FLAGS=-Wall -Wextra -Werror
HEADER_DIR=./includes/
FILES_DIR=./srcs/
FILES=$(FILES_DIR)ft_putchar.c $(FILES_DIR)ft_swap.c $(FILES_DIR)ft_putstr.c $(FILES_DIR)ft_strlen.c $(FILES_DIR)ft_strcmp.c
OBJS=$(FILES:.c=.o)

all: $(NAME)

%.o: %.c
	$(COMPILER) $(FLAGS) -c $*.c -I$(HEADER_DIR) -o $*.o

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -fr $(OBJS)

fclean:
	rm -fr $(OBJS) libft.a

re: fclean all

dotest:
	$(COMPILER) $(FLAGS) test.c -I$(HEADER_DIR) -o test -L. -lft

cleantest:
	rm -fr test

retest: cleantest dotest

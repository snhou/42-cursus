NAME = libft.a
OUTPUT = out

CFLAGS = -Wall -Werror -Wextra

SRC = ft_*.c
OBJ=$(SRC:.c=.o)
CC = cc
RM = /bin/rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	${RM} *.o

fclean: clean
	${RM} $(NAME) $(OUTPUT) *.out libft.a

re: fclean all test

test:
	$(CC) main.c -L. $(NAME) -o $(OUTPUT)
	./$(OUTPUT)

run:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

so: run fclean

.PHONY: all clean fclean re test
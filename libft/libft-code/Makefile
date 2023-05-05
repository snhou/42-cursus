NAME = libft.a
OUTPUT = out

CFLAGS = -c -Wall -Werror -Wextra

SRC = ft_strncmp.c
OBJ = ft_*.o
CC = cc
RM = /bin/rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) $(SRC)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	${RM} *.o

fclean: clean
	${RM} $(NAME) $(OUTPUT) *.out

re: fclean all test

test:
	$(CC) main.c -L. $(NAME) -o $(OUTPUT)
	./$(OUTPUT)

.PHONY: all clean fclean re test
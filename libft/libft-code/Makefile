NAME = libft.a
OUTPUT = out

CFLAGS = -c -Wall -Werror -Wextra

SRC = ft_strncmp.c
OBJ = ft_*.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ):
	cc $(CFLAGS) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) $(OUTPUT) *.out

re: fclean all test

test:
	cc main.c -L. $(NAME) -o $(OUTPUT)
	./$(OUTPUT)

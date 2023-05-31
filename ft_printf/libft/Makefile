# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shou <shou@student.42berlin.de>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 14:09:58 by shou              #+#    #+#              #
#    Updated: 2023/05/31 14:45:09 by shou             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

SRC = ft_isdigit.c ft_isspace.c \
ft_putchar.c ft_puthexa.c ft_puthexa_u.c ft_putnbr_fd.c ft_putnbr_base.c ft_putstr.c ft_putunbr_base.c \
ft_atof.c ft_nbrlen_base.c ft_ptr_setstring.c ft_strcapitalize.c ft_strchr.c ft_strlen.c  ft_unbrlen_base.c


OBJ=$(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o  $@ $<

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

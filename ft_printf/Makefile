# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shou <shou@student.42berlin.de>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 12:23:54 by shou              #+#    #+#              #
#    Updated: 2023/06/01 15:23:39 by shou             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

SRCS	=	ft_printf.c \
			ft_putchar.c \
	        ft_puthexa_u.c \
	        ft_putnbr_fd.c \
	        ft_putstr.c \
	        ft_putunbr_base.c \
	        ft_strchr.c \
	        ft_strlen.c  \
	        ft_unbrlen_base.c

OBJS	=	$(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o  $@ $<

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shou <shou@student.42berlin.de>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 12:23:54 by shou              #+#    #+#              #
#    Updated: 2023/05/31 14:40:18 by shou             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
IFLAGS	=	-Iinc -Ilibft/inc
MK		=	@mkdir -p
RM		=	@rm -rf
CMP		=	1
CLEAR	=	@clear


SRCS		:=	ft_printf.c

OBJS_DIR	:=	.objs
OBJS		:=	$(addprefix $(OBJS_DIR)/, $(SRCS:%.c=%.o))

LIBFT_PATH	= ./libft --no-print-directory
LIBFT_NAME	= ./libft/libft.a


all: $(LIBFT_NAME) $(NAME)

$(OBJS_DIR)/%.o: %.c
	$(MK) $(@D)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	
$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)

$(NAME): $(OBJS) 
	@ar rcsT $(NAME) $(OBJS) $(LIBFT_NAME)

clean:
	@make clean -C $(LIBFT_PATH)
	$(RM) $(OBJS_DIR)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

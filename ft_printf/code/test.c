/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:55:29 by shou              #+#    #+#             */
/*   Updated: 2023/06/01 14:20:14 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main (void)
{
	char c = 'a';
	char *str = "test";
	int var = -30;
	int *ptr = &var;

	printf("====printf====\n");
	printf("c: %c \n", c);
	printf("s: %s \n", str);
	printf("i: %i \n", var);
	printf("d: %d \n", var);
	printf("u: %u \n", var);
	printf("p : %p \n", ptr);
	printf("x : %x \n", var);
	printf("X : %X \n", var);
	printf("%%\n");
	ft_printf("====ft_printf====\n");
	ft_printf("c: %c \n", c);
	ft_printf("s: %s \n", str);
	ft_printf("i: %i \n", var);
	ft_printf("d: %d \n", var);
	ft_printf("u : %u \n", var);
	ft_printf("p: %i \n", ptr);
	ft_printf("x : %x \n", var);
	ft_printf("X : %X \n", var);
	ft_printf("%%\n");
	return (0);
}

//cc test.c -L. libftprintf.a
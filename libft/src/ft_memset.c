/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:21 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 16:54:32 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *) s)[i++] = c;
	return (s);
}

/*
//copies the character c (an unsigned char) 
//to the first n characters of the string pointed to, by the argument str.
//returns a pointer to the memory area s.
int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	memset(str, '$', 7);
	puts(str);
	ft_memset(str, '#', 7);
	puts(str);
	return (0);
}
*/
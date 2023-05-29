/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:49:09 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 17:04:27 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (++i <= n)
		if (((unsigned char *) s)[i - 1] == (unsigned char ) c)
			return ((void *) &s[i - 1]);
	return (NULL);
}
/*
//searches for the first occurrence of the character c (an unsigned char) 
//in the first n bytes of the string pointed to, by the argument str.
int main () {
	const char str[] = "www.test.com";
	const char ch = '.';
	char *ret;

	printf("before=> %s\n", str);
	ret = memchr(str, ch, strlen(str));
	printf("after=> %s\n", ret);
	return(0);
}
*/
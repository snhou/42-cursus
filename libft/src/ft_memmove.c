/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:49:17 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 18:29:30 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
		while (len--)
			((unsigned char *) dst)[len] = ((unsigned char *) src)[len];
	else
		while (++i <= len)
			((unsigned char *) dst)[i - 1] = ((unsigned char *) src)[i - 1];
	return (dst);
}

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy byte string
**
** DESCRIPTION:
** 		The memmove() function copies n bytes from string s2 to string s1.  The
**	two strings may overlap; the copy is always done in a non-destructive
**	manner.
*/
/*
int main () {
	char dest[] = "aqweqwe";
	const char src[]  = "bb";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 6);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return(0);
}
*/
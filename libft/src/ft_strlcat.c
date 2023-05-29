/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:38:56 by shou              #+#    #+#             */
/*   Updated: 2023/05/15 11:00:58 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (size <= dest_len)
		return (src_len + size);
	size -= (dest_len + 1);
	dst += dest_len;
	while (*src && size > 0)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (dest_len + src_len);
}
/*
#include <bsd/string.h>
//cc -lbsd
int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}
*/
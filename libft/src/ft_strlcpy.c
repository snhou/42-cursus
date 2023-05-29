/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:42:05 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 16:26:32 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	count;

	len = 0;
	while (src[len])
		len++;
	count = 0;
	if (size != 0)
	{
		while (count < (size - 1) && src[count])
		{
			dest[count] = src[count];
			count ++;
		}
		dest[count] = '\0';
	}
	return (len);
}
/*
//size-bounded string copying
//copies up to size - 1 characters from the NUL-terminated string src to dst
int    main(void)
{
    char dst[100] = "HelloWorld!";
    char dst2[100] = "HelloWorld!";

    const char src[11] = "teststring";
    int dstsize = 5;
    printf("len : %zu\n", ft_strlcpy(dst, src, dstsize));
    printf("%s\n", dst);
    return (0);
}
*/
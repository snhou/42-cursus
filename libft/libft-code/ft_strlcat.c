/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:38:56 by shou              #+#    #+#             */
/*   Updated: 2023/05/09 16:03:23 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len);
	i = 0;
	j = dest_len;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] && (dest_len + i + 1 < size))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dest_len + src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:38:31 by shou              #+#    #+#             */
/*   Updated: 2023/05/08 11:21:35 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *) str);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *) str + i);
		i++;
		j = 0;
	}
	return (NULL);
}

/*
#include <bsd/string.h>
cc -lbsd
int main() {
	printf("%s\n", ft_strnstr("TeAA BC", "AA", 4));
	printf("%s\n", strnstr("TeAA BC", "AA", 4));
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:38:31 by shou              #+#    #+#             */
/*   Updated: 2023/05/09 15:06:41 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return ((char *) str);
	while (i < len && str[i])
	{
		while ((i + j) < len && str[i + j] == to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
			return ((char *) str + i);
		j = 0;
		i++;
	}
	return (NULL);
}

/*
#include <bsd/string.h>
//cc -lbsd
int main() {
	printf("%s\n", ft_strnstr("", "", 10));
	printf("%s\n", strnstr("", "", 10));
	return (0);
}
*/
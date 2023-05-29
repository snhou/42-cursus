/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:04:03 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 15:57:33 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		cur;

	dup = (char *)malloc(ft_strlen(src) + 1);
	if (!dup)
		return (NULL);
	cur = 0;
	while (src[cur] != 0)
	{
		dup[cur] = src[cur];
		cur++;
	}
	dup[cur] = 0;
	return (dup);
}

/*
//duplicate a string
//returns a pointer to a new string which is a duplicate of the string s
int	main(void)
{
	printf("%s\n", ft_strdup("test"));//test
}
*/
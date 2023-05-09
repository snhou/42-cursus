/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:04:03 by shou              #+#    #+#             */
/*   Updated: 2023/05/09 15:53:43 by shou             ###   ########.fr       */
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

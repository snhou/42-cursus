/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:34:42 by shou              #+#    #+#             */
/*   Updated: 2023/05/08 11:36:15 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == (char) c)
			return ((char *) &s[i]);
	if (c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s", strchr("bca", 97));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:56:01 by shou              #+#    #+#             */
/*   Updated: 2023/05/15 15:06:13 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub_str = (char *) malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len && start + i < ft_strlen(s))
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
int	main(void)
{
	printf("%s",ft_substr(NULL,0,10));
}
*/
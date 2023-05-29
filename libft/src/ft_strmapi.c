/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:56:11 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 16:17:29 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	ret = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (s[++i])
		ret[i] = f((unsigned int) i, s[i]);
	ret[i] = '\0';
	return (ret);
}
/*
static char	ft_test(unsigned int i, char c)
{
	printf("index:%d char:%c\n", i, c);
	return (c - 32);
}

int	main(void)
{
	char *str= "hello";

	printf("Before => %s\n", str);
	printf("After => %s\n", ft_strmapi(str, ft_test));
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:49:36 by shou              #+#    #+#             */
/*   Updated: 2023/05/15 15:46:38 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split_count(char const *s, char c)
{
	int	count;
	int	len;
	int	i;

	count = 1;
	len = 0;
	i = -1;
	if (!s || !*s)
		return (count);
	while (s[++i])
	{
		if (s[i] != c)
			++len;
		else if (len && s[i] == c && ++count)
			len = 0;
	}
	if (s[i - 1] == c)
		return (count);
	else
		return (count + 1);
}

static int	ft_split_create(char ***ret, char const *s, int i, int len)
{
	**ret = ft_substr(&s[i - len], 0, len);
	(*ret)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		len;
	int		i;

	ret = (char **) malloc(ft_split_count(s, c) * sizeof(char *));
	if (!ret)
		return (NULL);
	*ret = NULL;
	len = 0;
	i = -1;
	if (!s || !*s)
		return (ret);
	while (s[++i])
	{
		if (s[i] != c)
			++len;
		else if (len && s[i] == c && ft_split_create(&ret, s, i, len))
			len = 0;
	}
	if (s[i - 1] != c)
		*ret++ = ft_substr(&s[i - len], 0, len);
	*ret++ = NULL;
	return (ret - ft_split_count(s, c));
}

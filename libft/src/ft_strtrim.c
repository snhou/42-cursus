/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:56:07 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 16:11:35 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]) && end > 0)
		--end;
	if (start > end + 1)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start + 1));
}

/*
//Allocates (with malloc(3)) and returns a copy of
//’s1’ with the characters specified in ’set’ removed
//from the beginning and the end of the string.
int	main(void)
{
	printf("%s",ft_strtrim(" qwerty "," q"));
}
*/
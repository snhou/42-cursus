/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:36:27 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 15:50:23 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int) ft_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == (char) c)
			return ((char *) &s[i]);
	return (NULL);
}
/*
//locate character in string
//returns a pointer to the last occurrence of the character c in the string s
int	main(void)
{
	printf("%s\n", ft_strrchr("bacab", 'a'));
	printf("%s\n", strrchr("bacab", 'a'));
}
*/
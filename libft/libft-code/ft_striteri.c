/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:56:17 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 14:19:08 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f((unsigned int) i, &s[i]);
		i++;
	}
}

/*
static void	ft_test(unsigned int i, char *s)
{
	if (i < 6)
		*s = 'a';
}

int	main(void)
{
	char	test[8] = "abcdefg";

	ft_striteri(test, ft_test);
	printf("%s\n", test);

	return (0);
}
*/
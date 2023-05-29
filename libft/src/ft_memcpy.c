/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:49:14 by shou              #+#    #+#             */
/*   Updated: 2023/05/29 17:10:03 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
//strcpy stops when it encounters a NUL ('\0') character, memcpy does not.
int	main(void)
{
  char str1[] = "Geeks"; 
  char str2[] = "Quiz"; 
 
  puts("str1 before memcpy ");
  puts(str1);

  memcpy (str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
}
*/
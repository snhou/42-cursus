/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:56:24 by shou              #+#    #+#             */
/*   Updated: 2023/05/23 13:28:16 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
int	main(void)
{
	int		fd1;
	char	buffer1[] = "example.txt";

	fd1 = open(buffer1, O_WRONLY);
	ft_putstr_fd("abcd", fd1);//3
}
*/
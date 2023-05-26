/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:40:50 by shou              #+#    #+#             */
/*   Updated: 2023/05/23 14:23:20 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
int	main(void)
{
	int		fd1;
	char	buffer1[] = "example.txt";

	fd1 = open(buffer1, O_WRONLY);
	ft_putchar_fd('c', fd1);
	printf("%d",fd1);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:56:30 by shou              #+#    #+#             */
/*   Updated: 2023/05/23 13:29:59 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}

/*
#include <fcntl.h>
int	main(void)
{
	int		fd1;
	char	buffer1[] = "example.txt";

	fd1 = open(buffer1, O_WRONLY);
	ft_putendl_fd("qwerty", fd1);
}
*/
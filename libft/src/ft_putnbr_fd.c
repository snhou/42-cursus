/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:56:27 by shou              #+#    #+#             */
/*   Updated: 2023/05/23 13:15:21 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
/*
//cc ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c
#include <fcntl.h>
int	main(void)
{
	int		fd1;
	int		fd2;
	char	buffer1[] = "example.txt";
	char	buffer2[] = "example1.txt";

	fd1 = open(buffer1, O_WRONLY);
	fd2 = open(buffer2, O_WRONLY);
	//printf("%d\n", fd1);
	//printf("%d\n", fd2);
	ft_putnbr_fd(123123234, fd1);
	ft_putnbr_fd(123123234, fd2);
}
*/
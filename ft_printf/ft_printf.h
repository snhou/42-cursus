/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:44:35 by shou              #+#    #+#             */
/*   Updated: 2023/06/01 15:24:00 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_puthexa_u(unsigned long long int n, char format);
int		ft_putnbr_fd(long long int n, int fd);
int		ft_putstr(char	*s);
int		ft_putunbr_base(unsigned long long int n, const char *base);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
size_t	ft_unbrlen_base(unsigned long long int n, size_t base);
int		ft_printf(const char *s, ...);

#endif

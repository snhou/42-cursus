/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:29:42 by shou              #+#    #+#             */
/*   Updated: 2023/05/31 14:47:11 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

double	ft_atof(const char *nptr);
int		ft_isdigit(int c);
int		ft_isspace(int c);
size_t	ft_nbrlen_base(long long int n, size_t base);
char	*ft_ptr_setstring(const char *s);
int		ft_putchar(char c);
int		ft_puthexa_u(unsigned long long int n, char format);
int		ft_puthexa(long long int n, char format);
int		ft_putnbr_base(long long int n, const char *base);
int		ft_putnbr_fd(long long int n, int fd);
int		ft_putstr(char	*s);
int		ft_putunbr_base(unsigned long long int n, const char *base);
char	*ft_strcapitalize(char *s);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
size_t	ft_unbrlen_base(unsigned long long int n, size_t base);

#endif

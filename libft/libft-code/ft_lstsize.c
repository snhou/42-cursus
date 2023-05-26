/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:47:48 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 13:02:14 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 1;
	while (lst && lst->next && ++size)
		lst = lst->next;
	return (size);
}

/*
int main() {
	t_list *one= NULL;
	t_list *two= NULL;
	t_list *three= NULL;
	int a=1;
	int b=2;
	int c=3;

	one = malloc(sizeof(t_list));
	two = malloc(sizeof(t_list));
	three = malloc(sizeof(t_list));
	one->content = &a;
	two->content = &b;
	three->content = &c;
	one->next = two;
	two->next = three;
	three->next = NULL;

	//test
	printf("%d\n", ft_lstsize(one));
}
*/
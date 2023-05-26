/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:47:40 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 13:00:54 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
int main() {
	int a=1;
	int b=2;
	int c=3;

	t_list *one = ft_lstnew(&a);
	t_list *two = ft_lstnew(&b);
	t_list *three = ft_lstnew(&c);
	one->next = two;
	two->next = three;
	three->next = NULL;

	while (one != NULL)
	{
		printf("%d\n", *(int *)(one->content));
		one = one->next;
	}
}
*/
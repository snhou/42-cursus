/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:46:36 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 11:59:17 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
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
	int d=4;
	t_list *new = NULL;
	new = malloc(sizeof(t_list));
	new->content = &d;
	ft_lstadd_front(&one,new);

	while (one != NULL)
	{
		printf("%d\n", *(int *)(one->content));
		one = one->next;
	}
}
*/
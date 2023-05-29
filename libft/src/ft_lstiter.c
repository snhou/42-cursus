/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:47:24 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 16:47:39 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    // Create a linked list with a few nodes
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = strdup("Node 1");
    t_list *node2 = malloc(sizeof(t_list));
    node2->content = strdup("Node 2");
    t_list *node3 = malloc(sizeof(t_list));
    node3->content = strdup("Node 3");

    // Link the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Apply ft_lstiter to print the content of each node
    ft_lstiter(node1, print_content);

    // Free the memory of the list
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
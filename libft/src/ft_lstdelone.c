/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:48:04 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 16:19:14 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
static void	ft_del(void *ap)
{
	char *str = (char *)ap;
    free(str);
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

    // Delete node3 from the list
    ft_lstdelone(node3, ft_del);

    // Verify if node3 is deleted
    printf("After deletion: \n");
    t_list *current = node1;
    while (current != NULL)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Free the remaining nodes
    free(node1);
    free(node2);

    return 0;
}
*/
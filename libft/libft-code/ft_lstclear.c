/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:46:40 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 15:58:57 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	lst = NULL;
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
	t_list *example = malloc(sizeof(t_list));

    // Link the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

	example = node1;
	while (example != NULL)
	{
		printf("%s\n", (char *)(example->content));
		example = example->next;
	}

    // Clear the list
    ft_lstclear(&node1, ft_del);

    // Verify if the list is empty
    if (node1 == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List is not empty\n");
    }

    return 0;
}
*/
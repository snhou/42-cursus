/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:47:34 by shou              #+#    #+#             */
/*   Updated: 2023/05/26 16:31:10 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst -> next;
	}
	return (ret);
}
/*
// Function to apply to each node in the original list
#include <ctype.h>
void *uppercase(void *content)
{
    char *str = (char *)content;
    size_t len = strlen(str);
    char *upper_str = malloc(len + 1);
    for (size_t i = 0; i < len; i++)
    {
        upper_str[i] = toupper(str[i]);
    }
    upper_str[len] = '\0';
    return upper_str;
}

// Function to delete the content of a node
void delete_content(void *content)
{
    free(content);
}

int main()
{
    // Create a linked list with a few nodes
    t_list *node1 = ft_lstnew(strdup("Hello"));
    t_list *node2 = ft_lstnew(strdup("World"));
    t_list *node3 = ft_lstnew(strdup("OpenAI"));

    // Link the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Apply ft_lstmap to create a new list with uppercase content
    t_list *new_list = ft_lstmap(node1, uppercase, delete_content);

    // Verify the new list
    printf("Original list:\n");
    t_list *current = node1;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    printf("New list:\n");
    current = new_list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Free the memory of the new list
    ft_lstclear(&new_list, delete_content);

    return 0;
}
*/
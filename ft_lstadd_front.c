/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:31:54 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 14:44:35 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
//Adds the node ’new’ at the beginning of the list.
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst);

int	main()
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	t_list *new = malloc(sizeof(t_list));

	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	ft_lstadd_front(&n1, new);

	printf("The list size is: %d\n", ft_lstsize(new));

	t_list	*tmp;
	while (n1)
	{
		tmp = n1->next;
		free(n1);
		n1 = tmp;
	}

	return (0);
}
*/
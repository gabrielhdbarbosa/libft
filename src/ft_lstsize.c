/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:35:08 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 18:13:14 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
//Counts the number of nodes in a list.
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	printf("The list size is: %d\n", ft_lstsize(n1));

	free(n1);
	free(n2);
	free(n3);

	return (0);
}
*/
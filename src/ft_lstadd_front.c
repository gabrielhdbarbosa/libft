/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:12:44 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/10 17:12:44 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

//Adds the node ’new’ at the beginning of the list.

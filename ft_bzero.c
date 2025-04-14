/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:41:55 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/09 18:55:32 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}

/*
//The bzero() function erases the data in the n bytes of the memory starting at
//the location pointed to by s by writing zeros (bytes with '\0') to that area.
#include <stdio.h>

int main ()
{
	int		i;
	char	c1[] = "42_common_core";

	i = 0;
	while (c1[i])
		i++;

// test with 2 chars
	ft_bzero(c1, 2);
	for (int j = 0; j < i; j++)
    {
		printf("%c", c1[j]);
	}
	printf("%c", '\n');

// test with 4 chars
	ft_bzero(c1, 4);
	for (int j = 0; j < i; j++)
    {
		printf("%c", c1[j]);
	}
	printf("%c", '\n');

	return(0);
}
*/
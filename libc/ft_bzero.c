/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:54:26 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/01 14:54:26 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;

	while (n > 0)
	{
		p [n - 1] = 0;
		n--;
	}
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

	ft_bzero(c1, 2);
	for (int j = 0; j < i; j++)
    {
		printf("%c", c1[j]);
	}
	printf("%c", '\n');

	ft_bzero(c1, 4);
	for (int j = 0; j < i; j++)
    {
		printf("%c", c1[j]);
	}
	printf("%c", '\n');

	return(0);
}
*/
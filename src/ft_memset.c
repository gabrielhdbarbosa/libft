/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:35:16 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/01 14:35:16 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;

	while (n > 0)
	{
		p [n - 1] = (unsigned char)c;
		n--;
	}
	return (s);
}

/*
//The memset() function fills the first n bytes of the memory area pointed to by
//s with the constant byte c. The memset() function returns a pointer to the
//memory area s.
#include <stdio.h>

int main ()
{
	char	c1[] = "42_common_core";

	ft_memset(c1, 'c', 2);
	printf("A copia para d: %s\n", c1);

	ft_memset(c1, 'c', 4);
	printf("A copia para d: %s\n", c1);

	return(0);
}
*/
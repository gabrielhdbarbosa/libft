/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:34:16 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/01 14:34:16 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);

	if (dest > src)
	{
		i = n;
		while (i-- > 0)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
//The memmove function copies n bytes from memory area src to memory area dest.
//The memory areas may overlap: copying takes place as though the bytes in src
//are first copied into a temporary array that does not overlap src or dest, and
//the bytes are then copied from the temporary array to dest.
//The memmove() function returns a pointer to dest.
#include <stdio.h>

int main ()
{
	char	d[] = "42_common_core";
	char	c1[16];
	char	c2[9];

	ft_memmove(c1, d, 15);
	printf("A copia para d: %s\n", c1);

	//nao funciona de maneira adequada por sobreposicao de memoria:
	ft_memmove(c2, d, 15);
	printf("A copia para d: %s\n", c2);

	return(0);
}
*/
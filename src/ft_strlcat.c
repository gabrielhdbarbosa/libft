/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:05:39 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/12 13:38:17 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (i >= size)
		return (size + j);
	k = 0;
	while (src[k] && (i + k + 1) < size)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}

/*
//Copy and catenate the input str into a destination str. If the destination
//buffer, limited by its size, isnt large enough to hold the copy, the resulting
//string is truncated (but its guaranteed to be null-terminated). They return
//the length of the total string they tried to create.
#include <stdio.h>

int main ()
{
	size_t	len;
	const char	s[15] = "42_common_core";
	char	dest[30] = "lets go: ";

	len = ft_strlcat(dest, s, 24);
	printf("%ld\n", len);
	printf("%s\n", dest);
}
*/
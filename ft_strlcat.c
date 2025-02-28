/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 23:08:25 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/19 23:08:25 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *restrict src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < dsize && dst[i])
		i++;
	while (src[j])
		j++;
	if (i >= dsize)
		return (dsize + j);
	while (src[k] && (i + k + 1) < dsize)
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

	len = ft_strlcat(dest, s, 23);
	printf("%lld\n", len);
	printf("%s\n", dest);
}
*/
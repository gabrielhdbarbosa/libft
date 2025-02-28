/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:53:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/21 18:53:30 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!find[0])
		return ((char *)src);
	while (src[i] && i < n)
	{
		j = 0;
		while ((src[i + j] == find [j]) && (i + j) < n)
		{
			if (find[j + 1] == '\0')
				return((char *)(src + i));
			j++;
		}
		i++;
	}
	return (0);
}

/*
//The strstr() function finds the first occurrence of the substring needle in
//the string haystack. The terminating null bytes ('\0') are not compared.
#include <stdio.h>

int	main()
{
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "mon", 9));
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "commom", 9));
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "_common_core", 13));
	return (0);
}
*/
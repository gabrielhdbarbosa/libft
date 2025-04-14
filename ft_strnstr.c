/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:33:49 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 17:32:45 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && ((i + j) < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*
//The strstr function finds the first occurrence of the substring needle in
//the string haystack. The terminating null bytes ('\0') are not compared.
#include <stdio.h>
int	main()
{
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "mon", 9));
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "commom", 9));
	printf("Retorna a substr caso existir: %s\n",
		ft_strnstr("42_common_core", "c", 4));
	return (0);
}
*/
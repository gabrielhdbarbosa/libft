/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:03:50 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/21 18:03:50 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
//The strcmp() function compares the two strings s1 and s2. The locale is not
//taken into account. The comparison is done using unsigned characters. The
//strncmp() function is similar, except it compares only the first (at most) n
//bytes of s1 and s2.
#include <stdio.h>

int	main()
{
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "42_common_core", 14));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "42_common", 9));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "common_core", 11));
	return (0);
}
*/
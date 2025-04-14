/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:04:11 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/09 15:34:33 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
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
			ft_strncmp("42_common_core", "42_common", 15));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "42_common_core", 9));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("42_common_core", "common_core", 11));
	printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
			ft_strncmp("$\'201'", "A", 11));
	return (0);
}
*/
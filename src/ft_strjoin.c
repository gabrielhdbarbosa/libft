/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:54:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/05 10:54:30 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!join)
		return (NULL);
	i = 0;
	while (*s1)
		*(join + i++) = *s1++;
	j = 0;
	while (*s2)
		*(join + i++) = *s2++;
	*(join + i) = '\0';
	return (join);
}

/*
//Allocates (with malloc) and returns a new string, which is the result of the
//concatenation of ’s1’ and ’s2’.
#include <stdio.h>

int	main()
{
	char	*s;
	char	*s1 = "42_com";
	char	*s2 = "mon_core";

	s = ft_strjoin(s1, s2);
	printf("%s\n", s);
	free(s);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:54:56 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 17:48:22 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrim(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_istrim(s1[start], set))
		start++;
	while (end >= start && ft_istrim(s1[end], set))
		end--;
	dest = ft_calloc((end - start + 2), sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (start <= end)
		dest[i++] = s1[start++];
	return (dest);
}

/*
//Allocates with malloc and returns a copy of s1 with the characters specified
//in ’set’ removed from the beginning and the end of the string.
#include <stdio.h>

int	main()
{
	char 	*s1 = "*__*####42_*#common#*_core####*__*";
	char 	*set = "_#*";
	char 	*s;

	s = ft_strtrim(s1, set);
	printf("%s\n", s);
	free(s);
	return(0);
}
*/
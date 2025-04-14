/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:36:54 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/12 15:32:44 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*d;

	size = (ft_strlen(s) + 1);
	d = ft_calloc(size, (sizeof(char)));
	if (!d)
		return (0);
	ft_strlcpy(d, s, size);
	return (d);
}

/*
//The strdup() function returns a pointer to a new string which is a duplicate
//of the string s. Memory for the new string is obtained with malloc(3), and can
//be freed with free(3).
#include <stdio.h>
int	main()
{
	const char	*s1 = "42_common_core";
	char		*s2;

	s2 = ft_strdup(s1);
	printf("Segue a str duplicada: %s\n", s2);
	free(s2);
	return (0);
}
*/
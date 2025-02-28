/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:36:34 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/18 18:36:34 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*list;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	list = 	(char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!list)
		return (NULL);
	while (s[i])
	{
		list[i] = s[i];
		i++;
	}
	list[i] = '\0';
	return (list);
}

/*
//The strdup() function returns a pointer to a new string which is a duplicate
//of the string s. Memory for the new string is obtained with malloc(3), and can
//be freed with free(3).
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	const char	*s1 = "42_common_core";
	char		*s2;

	s2 = ft_strdup(s1);
	printf("Segue a str duplicada: %s", ft_strdup(s2));
	free(s2);
	return (0);
}
*/
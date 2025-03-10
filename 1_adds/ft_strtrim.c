/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:00:54 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/05 12:00:54 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = (ft_strlen(s1) - 1);
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	while ((j > i) && ft_strchr(set, *(s1 + j)))
		j--;
	trimmed = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!trimmed)
		return (NULL);
	k = 0;
	while (i <= j)
		trimmed[k++] = s1[i++];
	trimmed[k] = '\0';
	return (trimmed);
}

/*
//Allocates with malloc and returns a copy of s1 with the characters specified
//in ’set’ removed from the beginning and the end of the string.
#include <stdio.h>

int	main()
{
	char 	*s1 = "__42_common_core__";
	char 	*set = "_";
	char 	*s;

	s = ft_strtrim(s1, set);
	printf("%s\n", s);
	free(s);
	return(0);
}
*/
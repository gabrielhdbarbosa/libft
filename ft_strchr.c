/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:13:43 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/19 19:13:43 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
//The strchr() function returns a pointer to the first occurrence of the char c
//in the string s. The strchr() functions return a pointer to the matched char
//or NULL if the character is not found. The terminating null byte is considered
//part of the string so that if c is specified as '\0', these functions return a
//pointer to the terminator
#include <stdio.h>

int	main()
{
	printf("Retorna 1 se for houver o char na str: %s\n",
			ft_strchr("42_common_core", 'e'));
	printf("Retorna 1 se for houver o char na str: %s\n",
			ft_strchr("42_common_core", 'f'));
	printf("Retorna 1 se for houver o char na str: %s\n",
			ft_strchr("42_common_core", '_'));
	printf("Retorna 1 se for houver o char na str: %s\n",
			ft_strchr("42_common_core", ' '));
	printf("Retorna 1 se for houver o char na str: %s\n",
			ft_strchr("42_common_core", '\0'));
	return (0);
}
*/
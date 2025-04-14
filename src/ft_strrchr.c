/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:57:02 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/12 15:09:46 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > -1)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		--i;
	}
	return (0);
}

/*
//The strrchr() function returns a pointer to the last occurrence of the char c
//in the string s. The strrchr() function return a pointer to the matched char
//or NULL if the character is not found. The terminating null byte is considered
//part of the string, so that if c is specified as '\0', these functions return
//a pointer to the terminator.
#include <stdio.h>
int	main()
{
	printf("Retorna o char em \"reverse\": %s\n",
		ft_strrchr("42_common_core", (int)'c'));
	printf("Retorna o char em \"reverse\": %s\n",
		ft_strrchr("42_common_core", (int)'4'));
	printf("Retorna o char em \"reverse\": %s\n",
		ft_strrchr("42_common_core", (int)' '));
	return (0);
}
*/
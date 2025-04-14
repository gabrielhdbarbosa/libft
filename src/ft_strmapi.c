/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:01:23 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 09:56:54 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dest;

	i = ft_strlen(s);
	dest = ft_calloc((i + 1), sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
//Applies the function f to each character of the string s passing its index as
//the first argument and the character itself as the second. A new string is
//created (malloc) to collect the results from the successive applications of f
#include <stdio.h>
static char	ft_maximize(unsigned int i, char c)
{
	(void)i;
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

int	main(void)
{
	char *s = "42_common_core";
	char *capitalized;

	capitalized = ft_strmapi(s, ft_maximize);
	printf("Original: %s\n", s);
	printf("Capitalized: %s\n", capitalized);
	free(capitalized);
	return (0);
}
*/
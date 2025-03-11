/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:54:56 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/09 14:54:56 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*pointer;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	pointer = (char *)malloc(sizeof(char) * (i + 1));
	if (!pointer)
		return (NULL);
	i = 0;
	while (s[i])
	{
		pointer[i] = f(i, s[i]);
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}

/*
//Applies the function f to each character of the string s passing its index as
//the first argument and the character itself as the second. A new string is
//created (malloc) to collect the results from the successive applications of f
char	ft_capitalize_char(unsigned int i, char c)
{
	static int start_word = 1;

	(void)i;
	if (c >= 'A' && c <= 'Z')
		c += 32;
	if (start_word && c >= 'a' && c <= 'z')
		c -= 32;
	start_word = !(c >= 'a' && c <= 'z') &&
				 !(c >= 'A' && c <= 'Z') &&
				 !(c >= '0' && c <= '9');
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char *s = "42_common_core";
	char *capitalized;

	capitalized = ft_strmapi(s, ft_capitalize_char);
	if (capitalized)
	{
		printf("Original: %s\n", s);
		printf("Capitalized: %s\n", capitalized);
		free(capitalized);
	}
	else
		printf("Erro ao alocar memória!\n");

	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:37:31 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/04 00:37:31 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	substr_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (ft_strdup(""));
	substr_len = s_len - start;
	if (substr_len > len)
		substr_len = len;
	substr = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);	
}

//Allocates (with malloc) and returns a substr from the string ’s’. The substr
//begins at index ’start’ and is of maximum size ’len’.
/*
#include <stdio.h>

int	main()
{
	char *str = "42_common_core";
	char *s1 = ft_substr(str, 0, 2);
	char *s2 = ft_substr(str, 20, 2);
	char *s3 = ft_substr(str, 10, 20);

	printf("Substr1: %s\n", s1);
	printf("Substr2: %s\n", s2);
	printf("Substr3: %s\n", s3);

	free(s1);
	free(s2);
	free(s3);
}
*/
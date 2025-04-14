/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:01:31 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 09:28:39 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	sublen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	sublen = slen - start;
	if (sublen > len)
		sublen = len;
	substr = ft_calloc((sublen + 1), sizeof(char));
	if (!substr)
		return (0);
	ft_strlcpy(substr, (&s[start]), (sublen + 1));
	return (substr);
}

/*
//Allocates memory (with malloc) and returns a substr from the string ’s’. The
//substr starts at index ’start’ and has a maximum lenght of ’len’.
#include <stdio.h>
int	main()
{
	char *str = "42_common_core";
	char *s1 = ft_substr(str, 0, 2);
	char *s2 = ft_substr(str, 20, 2);
	char *s3 = ft_substr(str, 10, 20);

	printf("Substr1: %s\n", s1);
	free(s1);
	printf("Substr2: %s\n", s2);
	free(s2);
	printf("Substr3: %s\n", s3);
	free(s3);
	return (0);
}
*/
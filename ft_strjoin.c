/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:56:37 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 09:46:18 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		size;
	char	*dest;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	size = (len1 + len2 + 1);
	dest = ft_calloc(size, sizeof(char));
	if (!dest)
		return (0);
	ft_strlcpy(dest, s1, (len1 + 1));
	ft_strlcat(dest, s2, size);
	return (dest);
}

/*
//Allocates (with malloc) and returns a new string, which is the result of the
//concatenation of ’s1’ and ’s2’.
#include <stdio.h>

int	main()
{
	char	*s;
	char	*s1 = "42_com";
	char	*s2 = "mon_core";
	char	*s3 = "club de regatas ";
	char	*s4 = "vasco da gama";

	s = ft_strjoin(s1, s2);
	printf("%s\n", s);
	free(s);
	s = ft_strjoin(s3, s4);
	printf("%s\n", s);
	free(s);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:06:29 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/21 21:06:29 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/*
//The memchr() function scans the initial n bytes of the memory area pointed to
//by s for the first instance of c. Both c and the bytes of the memory area
//pointed to by s are interpreted as unsigned char. The  memchr() function
//return a pointer to the matching byte or NULL if the character does not occur
//in the given memory area.
#include <stdio.h>

int main () {
   const char str[] = "42_common_core";
   const char c1 = 'c';
   char *r;

   r = ft_memchr(str, c1, 4);
   printf("A procura por %c e: %s\n", c1, r);
   r = ft_memchr(str, c1, 2);
   printf("A procura por %c e: %s\n", c1, r);

   return(0);
}
*/
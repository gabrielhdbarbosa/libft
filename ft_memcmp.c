/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:54:48 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/21 21:54:48 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}


//The memcmp() function compares the first n bytes (each interpreted as unsigned
//char) of the memory areas s1 and s2. The memcmp() function returns an integer
//less than, equal to, or greater than zero if the first n bytes of s1 is found,
//respectively, to be less than, to match, or be greater than the first n bytes
//of s2. For  a  nonzero  return  value, the sign is determined by the sign of
//the difference between the first pair of bytes (interpreted as unsigned char)
//that differ in s1 and s2. If n is zero, the return value is zero.
#include <stdio.h>

int main () {
   const char str[] = "42_common_core";
   const char c1 = 'common';
   char *r;

   r = ft_memchr(str, c1, 4);
   printf("A procura por %c e: %s\n", c1, r);
   r = ft_memchr(str, c1, 2);
   printf("A procura por %c e: %s\n", c1, r);

   printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
	ft_memcmp("42_common_core", "42_common_core", 14));
printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
	ft_memcmp("42_common_core", "42_common", 9));
printf("Retorna > 0 se s1 for maior, < 0 se menor, ou 0 se igual (n): %d\n",
	ft_memcmp("42_common_core", "common_core", 11));

   return(0);
}
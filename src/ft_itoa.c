/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:23:18 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/14 11:02:13 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*dest;
	int			i;
	long int	nb;

	nb = n;
	i = ft_len(nb);
	dest = ft_calloc((i + 1), sizeof(char));
	if (!dest)
		return (0);
	if (nb == 0)
		dest[0] = '0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		dest[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (dest);
}

/*
//Allocates with malloc and returns a string representing the integer received
//as an argument. Negative numbers must be handled.
#include <stdio.h>

int	main()
{
	int		test[] = {-2147483648, -42, 0, 1234, 2147483647};
	char	*s;
	int		i = 0;

	while (i < 5)
	{
		s = ft_itoa(test[i]);
		printf("ft_itoa(%d) becomes: \"%s\"\n", test[i], s);
		free(s);
		i++;
	}
	return (0);
}
*/
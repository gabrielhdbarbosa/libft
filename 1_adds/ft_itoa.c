/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:52:15 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/05 12:52:15 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n < 0)
			str[--len] = (~(n % 10) + 1) + '0';
		else
			str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
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
		printf("ft_itoa(%d) -> \"%s\"\n", test[i], s);
		free(s);
		i++;
	}
	return (0);
}
*/
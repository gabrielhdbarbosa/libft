/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:58:02 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/14 14:24:12 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	result;

	n = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr > 8 && *nptr < 14))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			n *= -1;
		nptr++;
	}
	while (*nptr > 47 && *nptr < 58)
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (n * result);
}

/*
//The atoi() function converts the initial portion of the string pointed to by
//nptr to int. The atoi() function does not detect errors.
//Returns the converted value or 0 on error.
#include <stdio.h>

int	main()
{
	const char *c = "      -455";
	int				s;

	s = ft_atoi(c);
	printf("%d\n", s);
	return (0);
}
*/
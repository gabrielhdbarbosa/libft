/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:56:07 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/17 20:30:27 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int n;
    int result;

    n = 1;
    result = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            n *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
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
	const char *c = "     -4242";
	int				s;

	s = ft_atoi(c);
	printf("%d\n", s);

}
*/
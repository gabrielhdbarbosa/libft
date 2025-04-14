/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:26:55 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/10 19:43:46 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
	return ;
}

/*
//Applies the function ’f’ on each character of the string passed as argument,
//passing its index as first argument. Each character is passed by address to
//’f’ to be modified if necessary.
#include <stdio.h>

static void	ft_maximize(unsigned int i, char *c)
{
	(void)i;
	if (*c > 96 && *c < 123)
		*c -= 32;
	return ;
}

int	main(void)
{
	char s[] = "42_coMmon_core";

	ft_striteri(s, ft_maximize);
	printf("Capitalized: %s\n", s);
	return (0);
}
*/
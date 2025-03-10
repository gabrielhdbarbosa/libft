/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:05 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/09 18:05:05 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
//Applies the function ’f’ on each character of the string passed as argument,
//passing its index as first argument. Each character is passed by address to
//’f’ to be modified if necessary.
void	ft_capitalize_char(unsigned int i, char *c)
{
	static int start_word = 1;

	(void)i;

	if (*c >= 'a' && *c <= 'z' && start_word)
		*c -= 32;
	else if (*c >= 'A' && *c <= 'Z' && !start_word)
		*c += 32;

	start_word = !(*c >= 'a' && *c <= 'z') &&
				 !(*c >= 'A' && *c <= 'Z') &&
				 !(*c >= '0' && *c <= '9');
}

#include <stdio.h>

int	main(void)
{
	char s[] = "42_coMmon_core";

	ft_striteri(s, ft_capitalize_char);
	printf("Capitalized: %s\n", s);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:00:55 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/18 21:00:55 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
//Checks for an alphabetic char; in the standard C locale, it is equivalent to:
//	(isupper(c)  ||  islower(c))
#include <stdio.h>

int	main()
{
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('A'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('0'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha(' '));
	return (0);
}
*/
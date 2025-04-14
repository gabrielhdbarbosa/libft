/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:14:09 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/07 12:17:24 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}

/*
//Checks for an alphabetic char; in the standard C locale, it is equivalent to:
//	(isupper(c)  ||  islower(c))
#include <stdio.h>
int	main()
{
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('A'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('z'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha('0'));
	printf("Retorna 1 se for alfabetico: %d\n", ft_isalpha(' '));
	return (0);
}
*/
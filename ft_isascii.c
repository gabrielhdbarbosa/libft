/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:17:36 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/18 21:17:36 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 122))
		return (1);
	else
		return (0);
}

/*
//Checks if c is a 7-bit unsigned char that fits into the ASCII character set.
#include <stdio.h>

int	main()
{
	printf("Retorna 1 se for ascii: %d\n", ft_isascii('A'));
	printf("Retorna 1 se for ascii: %d\n", ft_isascii('0'));
	printf("Retorna 1 se for ascii: %d\n", ft_isascii(' '));
	//printf("Retorna 1 se for ascii: %d\n", ft_isascii('ç'));

	return (0);
}
*/
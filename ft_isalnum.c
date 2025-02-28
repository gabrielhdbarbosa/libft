/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:52:49 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/18 20:52:49 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
//Checks for an alphanumeric character; it is  equivalent to:
//	(isalpha(c) || isdigit(c))
#include <stdio.h>

int	main()
{
	printf("Retorna 1 se for alfa-numerico: %d\n", ft_isalnum('A'));
	printf("Retorna 1 se for alfa-numerico: %d\n", ft_isalnum('0'));
	printf("Retorna 1 se for alfa-numerico: %d\n", ft_isalnum(' '));
	return (0);
}
*/
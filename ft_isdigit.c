/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:55:09 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/19 18:55:09 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
//Checks for a digit (0 through 9).
#include <stdio.h>

int	main()
{
	printf("Retorna 1 se for digito: %d\n", ft_isdigit('A'));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit('0'));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit(' '));
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:31:56 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/07 12:18:09 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c > 47 && c < 58);
}

/*
//Checks for a digit (0 through 9).
#include <stdio.h>
int	main()
{
	printf("Retorna 1 se for digito: %d\n", ft_isdigit('A'));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit('0'));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit(0));
	printf("Retorna 1 se for digito: %d\n", ft_isdigit(' '));
	return (0);
}
*/
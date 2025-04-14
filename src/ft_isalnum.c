/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:55:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/07 13:55:19 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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
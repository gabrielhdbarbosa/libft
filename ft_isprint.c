/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:03:33 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/19 19:03:33 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/*
//Checks for any printable character including space.
#include <stdio.h>

int	main()
{
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('A'));
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('0'));
	printf("Retorna 1 se for printavel: %d\n", ft_isprint(' '));
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('\t'));
	return (0);
}
*/
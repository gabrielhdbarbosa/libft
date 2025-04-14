/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:07:38 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/07 14:15:05 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
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
	printf("Retorna 1 se for printavel: %d\n", ft_isprint('\n'));
	return (0);
}
*/
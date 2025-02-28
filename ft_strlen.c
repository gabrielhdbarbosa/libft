/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:37:14 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/17 20:37:14 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
//The strlen() function calculates the length of the string pointed to by s,
//excluding the terminating null byte ('\0'). The strlen() function returns the
//number of bytes in the string pointed to by s.
#include <stdio.h>

int	main()
{
	printf("O tamanho da string \"42_common_core\" e: %d.\n", 
			ft_strlen("42_common_core"));
	printf("O tamanho da string \"S2 cafe com bolo\" e: %d.\n", 
			ft_strlen("S2 cafe com bolo"));
	return (0);
}
*/
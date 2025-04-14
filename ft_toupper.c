/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:44:57 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/07 13:58:16 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

/*
//If c is a lowercase letter, toupper() returns its uppercase equivalent, if an
//uppercase representation exists in the current locale. Otherwise, it returns c
#include <stdio.h>
int	main()
{
	printf("A letra A se torna: %c\n", ft_toupper('A'));
	printf("A letra Z se torna: %c\n", ft_toupper('Z'));
	printf("A letra a se torna: %c\n", ft_toupper('a'));
	printf("A letra z se torna: %c\n", ft_toupper('z'));
	return (0);
}
*/
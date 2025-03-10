/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:58:12 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/18 17:58:12 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
//If c is a lowercase letter, toupper() returns its uppercase equivalent, if an
//uppercase representation exists in the current locale. Otherwise, it returns c
#include <stdio.h>

int	main()
{
	printf("A letra A se torna: %d\n", ft_toupper('A'));
	printf("A letra Z se torna: %d\n", ft_toupper('Z'));
	printf("A letra a se torna: %d\n", ft_toupper('a'));
	printf("A letra z se torna: %d\n", ft_toupper('z'));
	return (0);
}
*/
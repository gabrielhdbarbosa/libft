/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:28:37 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/02/18 17:28:37 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
//If c is an uppercase letter, tolower() returns its lowercase equivalent, if a
//lowercase representation exists in the current locale. Otherwise, it returns c
#include <stdio.h>

int	main()
{
	printf("A letra A se torna: %d\n", ft_tolower('A'));
	printf("A letra Z se torna: %d\n", ft_tolower('Z'));
	printf("A letra a se torna: %d\n", ft_tolower('a'));
	printf("A letra z se torna: %d\n", ft_tolower('z'));
	return (0);
}
*/
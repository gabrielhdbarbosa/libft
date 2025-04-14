/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:50:45 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/12 15:31:45 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (0);
	tmp = malloc(nmemb * size);
	if (tmp)
		ft_bzero(tmp, (nmemb * size));
	return (tmp);
}

/*
//The calloc() function allocates memory for an array of nmemb elements of size
//bytes each and returns a pointer to the allocated memory. The memory is set
//to zero. If nmemb or size is 0, then calloc() returns a unique pointer value
//that can later be successfully passed to free(). If the multiplication of
//nmemb & size would result in integer overflow then calloc() returns an error.
//By contrast, an integer overflow would not be detected in the following call
//to malloc(), with the result that an incorrectly sized block of memory would
//be allocated: malloc(nmemb * size);
*/
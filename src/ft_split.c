/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:44:41 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/12 11:44:34 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(const char *str, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && !trigger)
		{
			trigger = 1;
			count++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (count);
}

char	*ft_strdup_mod(const char *s, char c)
{
	int		size;
	char	*d;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	d = ft_calloc((size + 1), (sizeof(char)));
	if (!d)
		return (0);
	ft_strlcpy(d, s, (size + 1));
	return (d);
}

static void	ft_free(char **array, int i)
{
	while (i >= 0)
		free(array[i--]);
	free(array);
	return ;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = -1;
	result = ft_calloc((ft_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			result[++i] = ft_strdup_mod(s, c);
			if (!result[i])
			{
				ft_free(result, i - 1);
				return (0);
			}
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i + 1] = 0;
	return (result);
}

/*
//The split function is the hardest one in this list, that's why I wrote down
//an explanation below. I wanted to make sure that I fixed the concepts and the
//logic before coding it and avoid future misconcepts.
//
//Allocates (with malloc) and returns an array of strings obtained by splitting
//’s’ using the char c as a delimiter. The array must end with a NULL pointer.
//
//Here we have to call four functions:
//	- ft_words: we will define how many words (tokens) we'll have;
//	- ft_strdup: we'll allocate the right amount of memory needed (malloc);
//	- ft_free: liberate the functions that didn't work properly;
//	- ft_split: the function that will return the array of strings organized
//
#include <stdio.h>
int	main()
{
	char	*s1 = "___42_common_core!";
	char	**w = ft_split(s1, '_');

	int i = 0;
	while (w[i])
	{
		printf("%s\n", w[i]);
		free(w[i]);
		i++;
	}
	free(w);
}
*/
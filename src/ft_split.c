/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:17:35 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/03 23:17:35 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count = 0;
	int	in_word = 0;

	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*worddup(const char *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	while (j < i)
	{
		word[j] = s[j];
		j++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **arr, int i)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;
	int		i;

	i = 0;
	words = 0;
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!s || !result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			result[i] = worddup(s, c);
			if (!result[i])
			{
				ft_free(result, i - 1);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

//Allocates (with malloc) and returns an array of strings obtained by splitting
//’s’ using the char c as a delimiter. The array must end with a NULL pointer.
//Here we have to create four functions:
//	- count_words: we will define how many words (tokens) we'll have;
//	- strdup: we'll allocate the right amount of memory needed (malloc);
//	- free: liberate the functions that didn't work properly;
//	- strlcpy: copy the string with the '\0' terminator.
/*
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:41:33 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/10 14:41:33 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return;
	while (*s)
		write(fd, s++, 1);
	write (fd, "\n", 1);
}

/*
//Outputs the string ’s’ to the given file descriptor followed by a newline
#include <fcntl.h>

int main(void)
{
	char	*s = "42_common_core";
	int		fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	if (fd == -1)
		return (1);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}
*/
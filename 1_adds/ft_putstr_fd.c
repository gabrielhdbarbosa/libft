/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:09:50 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/03/10 14:09:50 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return;
	while(*s)
		write(fd, s++, 1);
}

/*
//Outputs the string ’s’ to the given file descriptor.
#include <fcntl.h>

int main(void)
{
	char	*s = "42_common_core";
	int		fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	if (fd == -1)
		return (1);
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
	close(fd);
	return (0);
}
*/
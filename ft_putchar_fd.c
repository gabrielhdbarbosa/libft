/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:50:28 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 18:49:47 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
//Outputs the character ’c’ to the given file descriptor
#include <fcntl.h>

int main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
	
	ft_putchar_fd('4', fd);
	ft_putchar_fd('2', fd);
	ft_putchar_fd('_', fd);
	ft_putchar_fd('c', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('m', fd);
	ft_putchar_fd('m', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('n', fd);
	ft_putchar_fd('_', fd);
	ft_putchar_fd('c', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('r', fd);
	ft_putchar_fd('e', fd);
	ft_putchar_fd('!', fd);
	ft_putchar_fd('\n', fd);
	
	close(fd);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:08:58 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/11 10:29:18 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar_fd((n + 48), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
	return ;
}

/*
//Outputs the integer ’n’ to the given file descriptor.
#include <fcntl.h>

int main(void)
{
	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	if (fd == -1)
		return (1);
	ft_putnbr_fd(101010, fd);
	close(fd);
	return (0);
}
*/
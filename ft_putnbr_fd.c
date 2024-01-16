/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:21:53 by gcot              #+#    #+#             */
/*   Updated: 2023/02/10 16:22:06 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print(int n, int fd)
{
	char	c;

	c = n + '0';
	write(fd, &c, 1);
}

static void	ft_loop(int nb, int fd)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb >= 10)
	{
		i = nb % 10;
		nb = nb / 10;
		ft_loop(nb, fd);
		print(i, fd);
	}
	else
		print(nb, fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
		ft_loop(nb, fd);
}

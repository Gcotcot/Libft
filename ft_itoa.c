/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:16:59 by gcot              #+#    #+#             */
/*   Updated: 2023/02/09 12:38:51 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_int(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	if (n > 0)
		i++;
	return (i);
}

static int	ft_is_neg(int n, char *str)
{
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
	{
		n = -147483648;
		str[1] = '2';
	}
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = size_int(n);
	str = malloc(sizeof (*str) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	n = ft_is_neg(n, str);
	while (n / 10)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (n > 0)
		str[len] = n + '0';
	return (str);
}

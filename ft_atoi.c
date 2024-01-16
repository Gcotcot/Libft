/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:18:52 by gcot              #+#    #+#             */
/*   Updated: 2023/02/02 13:35:11 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white_space(const char *str, int i)
{
	if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		return (1);
	if (str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	p;

	i = 0;
	nb = 0;
	p = 1;
	while (str[i] != '\0' && white_space(str, i) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p = p * -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
			nb = nb * 10 + (str[i] - '0');
		else
			return (nb * p);
		i++;
	}
	return (nb * p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:57:10 by gcot              #+#    #+#             */
/*   Updated: 2023/02/04 13:44:13 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*str;

	str = malloc(sizeof(*str) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[x])
	{
		str[i] = s1[x];
		i ++;
		x ++;
	}
	x = 0;
	while (s2[x])
	{
		str[i] = s2[x];
		i ++;
		x ++;
	}
	str[i] = '\0';
	return (str);
}

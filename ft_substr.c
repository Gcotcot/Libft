/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:45:37 by gcot              #+#    #+#             */
/*   Updated: 2023/02/04 13:45:21 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = *(char *)(s + start);
		i ++;
		start ++;
	}
	str[i] = '\0';
	return (str);
}

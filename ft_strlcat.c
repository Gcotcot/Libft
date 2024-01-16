/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:46:39 by gcot              #+#    #+#             */
/*   Updated: 2023/02/06 16:59:57 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len;

	if (!size && !dest)
		return (0);
	len = ft_strlen(dest);
	n = 0;
	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	while (src[n] != '\0' && i < size - 1)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	if (len < size)
		dest[i] = '\0';
	if (i >= size)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len);
}

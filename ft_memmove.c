/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:01:37 by gcot              #+#    #+#             */
/*   Updated: 2023/02/06 17:10:05 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if ((size_t)dest - (size_t)src >= n)
		ft_memcpy(dest, src, n);
	else
	{
		n--;
		while (n > 0)
		{
			*(char *)(dest + n) = *(const char *)(src + n);
			n--;
		}
		*(char *)(dest + n) = *(const char *)(src + n);
	}
	return (dest);
}

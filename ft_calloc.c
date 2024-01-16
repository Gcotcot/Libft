/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:56:54 by gcot              #+#    #+#             */
/*   Updated: 2023/02/06 15:07:23 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	if (!nmemb || !size)
		return (malloc(0));
	if ((nmemb * size) / size != nmemb)
		return (NULL);
	pt = malloc(nmemb * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, nmemb * size);
	return (pt);
}

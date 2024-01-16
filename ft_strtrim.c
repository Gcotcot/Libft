/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:47:27 by gcot              #+#    #+#             */
/*   Updated: 2023/02/11 13:47:38 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cut(char *str, const char *s1, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < ft_strlen(s1) - end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
}

static size_t	find_start(char const *s1, char const *set)
{
	int		i;
	int		y;
	size_t	x;

	i = 0;
	x = 0;
	y = 0;
	while (y < ft_strlen(set))
	{
		if (s1[i] == set[y])
		{
			x++;
			i++;
			y = -1;
		}
		y++;
	}
	return (x);
}

static size_t	find_end(char const *s1, char const *set)
{
	int		i;
	int		y;
	size_t	x;

	i = 0;
	x = 0;
	y = 0;
	while (y < ft_strlen(set))
	{
		if (s1[ft_strlen(s1) - 1 - i] == set[y])
		{
			x++;
			i++;
			y = -1;
		}
		y++;
	}
	return (x);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = find_start(s1, set);
	end = find_end(s1, set);
	if ((start + end) >= (size_t)ft_strlen(s1))
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		return (str);
	}
	str = malloc(sizeof(*str) * (ft_strlen(s1) + 1) - (start + end));
	if (!str)
		return (NULL);
	ft_cut(str, s1, start, end);
	return (str);
}

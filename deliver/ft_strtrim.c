/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:30:29 by gfragoso          #+#    #+#             */
/*   Updated: 2023/10/03 12:35:13 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	size_t	i;
	size_t	total;
	char	*res;

	if (!s1)
		return (NULL);
	start = 0;
	while (ft_inset(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (start < end && ft_inset(s1[end], set))
		end--;
	total = end - start + 2;
	res = (char *)malloc(sizeof(char) * (total));
	if (!res)
		return (NULL);
	i = 0;
	while (i < total - 1)
		res[i++] = s1[start++];
	res[i] = 0;
	return (res); 
}

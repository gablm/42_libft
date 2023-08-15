/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:11:16 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 16:55:39 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		h;
	int		v;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char **) * (ft_countwords(s, c) + 1));
	if (!res)
		return (NULL);
	i = -1;
	h = 0;
	v = 0;
	while (s[++i])
	{
		if (v > 0 && s[i] == c)
		{
			res[h++] = ft_strsub(s, i - v, v);
			v = 0;
		}
		else if (s[i] != c)
			v++;
	}
	res[h] = 0;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:31:45 by gfragoso          #+#    #+#             */
/*   Updated: 2023/10/03 12:33:33 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char delim)
{
	int	i;
	int	res;

	if (!str || !str[0])
		return (0);
	res = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == delim && i > 0)
		{
			if (str[i - 1] != delim)
				res++;
		}
		i++;
	}
	if (str[i] == '\0' && str[i - 1] != delim)
		res++;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		h;
	int		v;

	res = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!res || !s)
		return (NULL);
	i = -1;
	h = 0;
	v = 0;
	while (s[++i])
	{
		if (v > 0 && s[i] == c)
		{
			res[h++] = ft_substr(s, i - v, v);
			v = 0;
		}
		else if (s[i] != c)
			v++;
	}
	if (v > 0)
		res[h++] = ft_substr(s, i - v, v);
	res[h] = 0;
	return (res);
}

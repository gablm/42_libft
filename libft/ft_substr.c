/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:30:23 by gfragoso          #+#    #+#             */
/*   Updated: 2023/10/02 12:30:24 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

static size_t	ft_tlen(size_t len_s, unsigned int start, size_t len)
{
	size_t	i;

	i = ft_min(len_s, len);
	if (start + len > len_s)
		i = len_s - start;
	return (i + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
	{
		start = 0;
		len = 0;
	}
	res = (char *)malloc(sizeof(char) * ft_tlen(slen, start, len));
	if (!res)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:01:43 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 16:23:44 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_iswhitespace(s[start]))
		start++;
	end = ft_strlen(s);
	while (ft_iswhitespace(s[end]))
		end--;
	res = (char *)malloc(sizeof(char) * (end - start + 2));
	i = 0;
	while (start != end)
		res[i++] = s[start++];
	res[i] = 0;
	return (res); 
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:54:26 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/17 15:31:51 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		h;
	int		s1len;
	int		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (NULL);
	i = 0;
	h = 0;
	while (h < s1len)
		res[i++] = s1[h++];
	h = 0;
	while (h < s2len)
		res[i++] = s2[h++];
	res[i] = 0;
	return (res);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argv[1], argv[2]));
	return 0;
}*/
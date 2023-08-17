/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:39:38 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/17 14:43:20 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#define ft_strlen(x) strlen(x)

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	ll;

	if (!little[0])
		return ((char *)big);
	if (len == 0)
		return (0);
	i = 0;
	ll = ft_strlen(little);
	while (big[i] && ll <= len - i)
	{
		if (!strncmp(big + i, little, ll))
			return ((char *)big + i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <bsd/string.h>
int main(int argc, char **argv)
{
	printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	return 0;
}*/
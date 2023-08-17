/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:01:43 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/17 15:09:37 by gfragoso         ###   ########.fr       */
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

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	size_t	i;
	size_t	total;
	char	*res;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_inset(s[start], set))
		start++;
	end = ft_strlen(s) - 1;
	while (start < end && ft_inset(s[end], set))
		end--;
	total = end - start + 2;
	res = (char *)malloc(sizeof(char) * (total));
	i = 0;
	while (i < total - 1)
		res[i++] = s[start++];
	res[i] = 0;
	return (res); 
}

/*#include <stdio.h>
int main(int argc, char **argv){
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return 0;
}*/
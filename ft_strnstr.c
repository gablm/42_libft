/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:39:38 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 15:07:13 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	ll;

	i = 0;
	ll = ft_strlen(little);
	if (strcmp(little, ""))
		return ((char *)big);
	while (big[i] && i + ll < len)
	{
		if (!strncmp(big + i, little, ll))
			return ((char *)big + i);
		i++;
	}
	return (0);
}

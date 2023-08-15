/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:28:21 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 14:28:21 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	size_t	ll;

	i = 0;
	ll = ft_strlen(little);
	if (ll == 0)
		return ((char *)big);
	while (big[i])
	{
		if (!strncmp(big + i, little, ll))
			return ((char *)big + i);
		i++;
	}
	return (0);
}

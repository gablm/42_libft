/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:30:47 by gfragoso          #+#    #+#             */
/*   Updated: 2023/10/03 12:59:14 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (!ft_strncmp(big + i, little, ll))
			return ((char *)big + i);
		i++;
	}
	return (0);
}

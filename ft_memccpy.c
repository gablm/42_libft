/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:26:49 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 11:49:14 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	i = 0;
	s = src;
	while (i < n)
	{
		*((char *)dest + i) = *(s + i);
		if (s[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}

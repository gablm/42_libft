/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:25:31 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 14:25:31 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dsi;
	size_t	sri;

	if (!dest || !src)
		return (0);
	dsi = ft_strlen(dest);
	sri = ft_strlen(src);
	if (size > dsi)
		sri += dsi;
	else
		sri += size;
	i = 0;
	if (size == 0)
		return (sri);
	while (src[i] && dsi + i < size - 1)
	{
		dest[dsi + i] = src[i];
		i++;
	}
	dest[dsi + i] = '\0';
	return (sri);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:31:12 by gfragoso          #+#    #+#             */
/*   Updated: 2023/10/02 12:31:12 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsi;
	size_t	sri;

	if (size == 0)
		return (0);
	dsi = ft_strlen(dst);
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
		dst[dsi + i] = src[i];
		i++;
	}
	dst[dsi + i] = '\0';
	return (sri);
}

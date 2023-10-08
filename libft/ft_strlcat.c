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

	sri = ft_strlen(src);
	if (size == 0)
		return (sri);
	dsi = ft_strlen(dst);
	if (size <= dsi)
		return (sri + size);
	i = 0;
	while (src[i] && dsi + i < size - 1)
	{
		dst[dsi + i] = src[i];
		i++;
	}
	dst[dsi + i] = '\0';
	return (sri + dsi);
}

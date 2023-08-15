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

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	int		i;
	int		dsi;
	int		sri;

	dsi = ft_strlen(dest);
	sri = ft_strlen(src);
	if ((int)size > dsi)
		sri += dsi;
	else
		sri += size;
	i = 0;
	while (src[i] && (dsi + i < (int)size - 1))
	{
		dest[dsi + i] = src[i];
		i++;
	}
	dest[dsi + i] = '\0';
	return (sri);
}

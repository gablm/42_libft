/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:24:26 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 14:24:26 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	int		dsi;

	dsi = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dsi++] = src[i++];
	}
	dest[dsi] = '\0';
	return (dest);
}

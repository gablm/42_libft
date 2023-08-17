/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:22:32 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 14:22:32 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	dsi;

	dsi = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dsi++] = src[i++];
	}
	dest[dsi] = '\0';
	return (dest);
}

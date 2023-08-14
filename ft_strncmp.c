/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:40:17 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/24 11:32:33 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s2[i] == '\0' || s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0' && i != n)
		return (s1[i] - s2[i]);
	return (0);
}

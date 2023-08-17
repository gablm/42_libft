/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:15:40 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 16:28:31 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *str, char delim)
{
	int	i;
	int	res;

	if (!str)
		return (-1);
	if (ft_strlen(str) == 0)
		return (0);
	res = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == delim && i > 0)
		{
			if (str[i - 1] != delim)
				res++;
		}
		i++;
	}
	if (str[i] == '\0' && str[i - 1] != delim)
		res++;
	return (res);
}

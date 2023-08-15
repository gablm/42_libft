/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:36:19 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 16:45:04 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printarray(char **strs)
{
	int	i;

	i = 0;
	ft_putstr("[\n");
	while (strs[i] != 0)
	{
		ft_putnbr(i);
		ft_putstr(": \"");
		ft_putstr(strs[i++]);
		ft_putstr("\"\n");
	}
	ft_putstr("]\n");
}

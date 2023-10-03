/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:33:43 by gfragoso          #+#    #+#             */
/*   Updated: 2023/10/02 12:33:44 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	res;

	if (!lst)
		return (0);
	res = 1;
	while (lst->next != 0)
	{
		res++;
		lst = lst->next;
	}
	return (res);
}

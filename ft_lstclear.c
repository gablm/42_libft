/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:34:15 by gfragoso          #+#    #+#             */
/*   Updated: 2023/10/03 12:32:41 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!lst || !del)
		return ;
	if (!((*lst)->content))
		return ;
	while (*lst != NULL)
	{
		current = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(current, del);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:28:21 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 14:28:21 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, char *little)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i])
	{
		if (big[i] == little[h])
		{
			h++;
			if (little[h] == '\0')
			{
				h = i - h + 1;
				return (big + h);
			}
		}
		else
			h = 0;
		i++;
	}
	return (0);
}

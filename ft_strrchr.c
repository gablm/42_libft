/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:36:32 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 14:47:35 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			res = s + i;
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	if (res != 0)
		return (res);
	return (0);
}

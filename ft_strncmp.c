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
		if (s2[i] == '\0')
			return (1);
		if (s2[i] > s1[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s2[i] != '\0' && i != n)
		return (-1);
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	char *a = "39JJ09ARSD";
	char *b = "MAndo20fm3";
	int i = 5;
	int c = strncmp(a, b, i);
	int d = ft_strncmp(a, b, i);
	printf("%d\n%d\n", c, d);
}*/
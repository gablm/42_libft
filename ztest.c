/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ztest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:06:45 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 13:56:09 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char a[] = "cringe";
	//char b[] = "0000000000";
	char *c = ft_memchr(a, 'i', 6);
	ft_putstr(a);
	ft_putchar(10);
	ft_putstr(c);
	
	ft_putchar(10);
	return (0);
}

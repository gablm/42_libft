/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ztest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:06:45 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 14:50:04 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char a[] = "cringert";
	char b[] = "cringERT0000";
	ft_putnbr(memcmp(a, b, 8));
	ft_putchar(10);
	ft_putstr(a);
	ft_putchar(10);
	return (0);
}

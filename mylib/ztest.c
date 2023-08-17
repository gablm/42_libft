/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ztest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:06:45 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/15 16:49:27 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	ft_printarray(ft_strsplit(argv[2], argv[1][0]));
	(void)argv;
	(void)argc;
	return (0);
}
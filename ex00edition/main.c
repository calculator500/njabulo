/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 11:09:08 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/25 15:12:08 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "rush00.c"

int	ft_atoi(char *str)
{
	int i;
	int a;
	int number;

	i = 0;
	number = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		a = str[i] - 48;
		number = number * 10 + a;
		i++;
	}
	return (number);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = argv[1][0] - 48;
	y = argv[2][0] - 48;
//	int y;
//	char *a = "-96it87";
//	x = atoi(a);
//	y = ft_atoi(argv[2]);
//	printf("%d", x);
//	write(1, "\n", 1);
	rush00(x, y);
	return (0);
}

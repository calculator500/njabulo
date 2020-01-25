/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:15:31 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/25 15:29:26 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	display(char *str)
{
	int		i;
	char	buf;
	
	while (read(0, &buf, 1) != 0)
		i++;
	printf("%i\n", i);
}

int		main(int argc, char **argv)
{
	display(argv[1]);
}

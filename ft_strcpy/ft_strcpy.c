/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 09:12:06 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/23 09:20:32 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

int		main()
{
	char s2[10] = "Hello";
	char s1[12];
	
	ft_strcpy(s1, s2);
	printf("%s\n", s2);
	printf("%s\n", s1);
	return (0);
}

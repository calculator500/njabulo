/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:53:46 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/23 17:33:14 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display(char *filename)
{
	int		file;
	char	content;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &content, 1))
		write(1, &content, 1);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "file name missing.\n", 19);
	else if (argc > 2)
	   write(2, "To many arguments.\n", 19);
	else
		display(argv[1]);
	return (0);
}	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokusolver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 09:41:16 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/19 16:47:45 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		sectorsolver(int number, int puzzle[][9], int row, int column)
{
	int n;
	int index;
	int sectorrow;
	int sectorcolumn;

	index = 0;
	if (n == 1 || n < 9)
	{
		if (puzzle[n][column] == number)
			return (0);
		if (puzzle[row][n] == number)
			return (0);
		if (puzzle[sectorrow][sectorcolumn] == number)
			return (0);
		if (puzzle[sectorcolumn][sectorrow] == number)
			return (0);
	}
}

int		rowsolver(int number, int puzzle[][9], int row, int column)
{
	int i;
	int n;

	i = 0;
	if (n == 0 || n < 9)
		columnsolver(number, puzzle, row, column);
	{
		if (puzzle[row][column])
		{
			if (puzzle[row][n])
				return (1);
			if (puzzle[n][column])
				return (1);
		}
		return (0);
	}
}

int		columnsolver(int number, int puzzle[][9], int column, int row)
{
	int i;
	int n;

	i = 0;
	if (n == 0 || n < 9)
	{
		if (puzzle[column][row])
		{
			if (puzzle[n][row])
				return (1);
			if (puzzle[column][n])
				return (1);
		}
		return (0);
	}
}

int		sudokusolver(int puzzle[][9], int row, int column)
{
	int nbr;
	int number;

	nbr = 1;
	if (9 == row)
		return (1);
	rowsolver(number, puzzle, row, column);
	{
		if (puzzle[row][column])
			if (column == 9 && row == 9)
				return (1);
		{
			if (sudokusolver(puzzle, row + 1, column))
				return (1);
			else if (sudokusolver(puzzle, row, column + 1))
				return (1);
		}
	}
}

int		main(void)
{
	int true;
	int row;
	int column;
	int puzzle[9][9];

	puzzle[9][9] = 9, 0, 0, 0, 7, 0, 0, 0, 0,
					2, 0, 0, 0, 9, 0, 0, 5, 3,
					0, 6, 0, 0, 1, 2, 4, 0, 0,
					8, 4, 0, 0, 0, 1, 0, 9, 0,
					5, 0, 0, 0, 0, 0, 8, 0, 0,
					0, 3, 1, 0, 0, 4, 0, 0, 0,
					0, 0, 3, 7, 0, 0, 6, 8, 0,
					0, 9, 0, 0, 5, 0, 7, 4, 1,
					4, 7, 0, 0, 0, 0, 0, 0, 0;
	if (sudokusolver(puzzle, row, column) == true)
	{
		sudokusolver(puzzle, row, column);
		ft_putchar(sudokusolver(puzzle, row, column));
	}
	write(1, "no solution exists\n", 19);
	return (0);
}

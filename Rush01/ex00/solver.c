/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:30:17 by thduong           #+#    #+#             */
/*   Updated: 2021/06/06 14:03:31 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	next_cell(int x, int y, int *next_x, int *next_y)
{
	if (y == SIZE - 1)
	{
		*next_x = x + 1;
		*next_y = 0;
	}
	else
	{
		*next_x = x;
		*next_y = y + 1;
	}
}

void	found_solution(int **sudoku, int *solved)
{
	if (*solved == -1)
		print_sudoku(sudoku);
	*solved = *solved + 1;
	return ;
}

void	solve(int **sudoku, int x, int y, int *solved)
{
	int n;
	int next_x;
	int next_y;

	if (*solved > 1)
		return ;
	if (x == SIZE)
		return (found_solution(sudoku, solved));
	next_cell(x, y, &next_x, &next_y);
	if (sudoku[x][y] != 0)
		return (solve(sudoku, next_x, next_y, solved));
	n = 0;
	while (++n <= SIZE)
	{
		if (is_possible(sudoku, x, y, n))
		{
			sudoku[x][y] = n;
			solve(sudoku, next_x, next_y, solved);
			sudoku[x][y] = 0;
		}
	}
}

int		sudoku_solver(int **sudoku)
{
	int solved;

	if (is_valid(sudoku) == 0)
	{
		write(1, "Error\n", 6);
		free_sudoku(sudoku);
		return (0);
	}
	solved = 0;
	solve(sudoku, 0, 0, &solved);
	if (solved > 1)
		write(1, "Error\n", 6);
	else if (solved == 0)
		write(1, "Error\n", 6);
	else
	{
		solved = -1;
		solve(sudoku, 0, 0, &solved);
	}
	free_sudoku(sudoku);
	return (0);
}

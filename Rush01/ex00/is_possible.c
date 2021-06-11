/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_possible.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:36:26 by rkoponen          #+#    #+#             */
/*   Updated: 2021/06/05 19:16:36 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

/*
**	check_box will:
**	- return 1 if it is possible to put number n in the box
**	- return 0 if is is not possible
*/

int	check_box(int **sudoku, int col, int line, int n)
{
	int i;
	int j;

	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 3)
		{
			if (sudoku[line + j][col + i] == n)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

/*
**	is_possible will:
**	- return 1 if it is possible to put number n in sudoku[x][y]
**	- return 0 if is is not possible
*/

int	is_possible(int **sudoku, int x, int y, int n)
{
	int i;
	int line;
	int col;

	i = 0;
	while (i < 9)
	{
		if (sudoku[x][i] == n || sudoku[i][y] == n)
			return (0);
		i++;
	}
	col = (y / 3) * 3;
	line = (x / 3) * 3;
	return (check_box(sudoku, col, line, n));
}

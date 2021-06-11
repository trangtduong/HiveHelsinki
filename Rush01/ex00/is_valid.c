/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:13:00 by rkoponen          #+#    #+#             */
/*   Updated: 2021/06/05 19:29:22 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	is_valid(int **sudoku)
{
	int temp;
	int x;
	int y;

	x = 0;
	while (x < SIZE)
	{
		y = 0;
		while (y < SIZE)
		{
			if (sudoku[x][y] != 0)
			{
				temp = sudoku[x][y];
				sudoku[x][y] = 0;
				if (is_possible(sudoku, x, y, temp) == 0)
					return (0);
				sudoku[x][y] = temp;
			}
			y++;
		}
		x++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sudoku.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:44:34 by jpatrone          #+#    #+#             */
/*   Updated: 2021/06/05 21:14:11 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		**create_sudoku(int argc, char **argv)
{
	int	i;
	int	j;
	int	**grid;

	(void)argc;
	grid = (int **)malloc(sizeof(int *) * 9);
	i = 0;
	while (i < 9)
	{
		grid[i] = (int *)malloc(sizeof(int) * 9);
		i++;
	}
	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			if (argv[i + 1][j] == '.')
				grid[i][j] = 0;
			else
				grid[i][j] = argv[i + 1][j] - '0';
		}
	}
	return (grid);
}

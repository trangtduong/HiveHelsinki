/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:22:06 by thduong           #+#    #+#             */
/*   Updated: 2021/06/05 17:42:31 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sudoku(int **sudoku)
{
	int x;
	int y;

	x = -1;
	while (++x < SIZE)
	{
		y = -1;
		while (++y < SIZE)
		{
			ft_putchar('0' + sudoku[x][y]);
			if (y == SIZE - 1)
				ft_putchar('\n');
			else
				ft_putchar(' ');
		}
	}
}

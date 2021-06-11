/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:09:29 by thduong           #+#    #+#             */
/*   Updated: 2021/06/06 14:03:41 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	main(int argc, char **argv)
{
	int **sudoku;

	if (!is_valid_input(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	sudoku = create_sudoku(argc, argv);
	return (sudoku_solver(sudoku));
}

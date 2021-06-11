/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:41:41 by thduong           #+#    #+#             */
/*   Updated: 2021/06/05 21:46:09 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>
# define SIZE 9

int		**create_sudoku(int argc, char **argv);
int		is_possible(int **sudoku, int x, int y, int n);
int		free_sudoku(int **sudoku);
int		is_valid(int **sudoku);
int		is_valid_input(int argc, char **argv);
void	print_sudoku(int **sudoku);
int		sudoku_solver(int **sudoku);
#endif

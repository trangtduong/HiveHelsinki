/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:27:23 by thduong           #+#    #+#             */
/*   Updated: 2021/05/29 17:56:04 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const	int	g_board = 8;

void	ft_putchar(char c);

void	print_solution(int queens[])
{
	int i;

	i = 0;
	while (++i <= g_board)
	{
		ft_putchar('0' + queens[i]);
	}
	ft_putchar('\n');
}

void	solve_queens_puzzle_2(int qi, int queens[])
{
	int p;
	int i;
	int put_queen;

	if (qi > g_board)
	{
		print_solution(queens);
		return ;
	}
	p = 0;
	while (++p <= g_board)
	{
		put_queen = 1;
		i = 0;
		while (++i < qi)
		{
			if (p == queens[i] || p == (queens[i] + qi - i) ||
				p == (queens[i] - qi + i))
				put_queen = 0;
		}
		if (put_queen == 0)
			continue ;
		queens[qi] = p;
		solve_queens_puzzle_2(qi + 1, queens);
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	const	int	baseplus1 = 9;
	int			queens[baseplus1];

	queens[0] = -1;
	solve_queens_puzzle_2(1, queens);
}

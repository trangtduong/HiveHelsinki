/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:27:23 by thduong           #+#    #+#             */
/*   Updated: 2021/05/29 17:30:24 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	solve_queens_puzzle(int qi, int queens[], int *count)
{
	int p;
	int i;
	int put_queen;

	if (qi > 8)
	{
		*count = *count + 1;
		return ;
	}
	p = 0;
	while (++p <= 8)
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
		solve_queens_puzzle(qi + 1, queens, count);
	}
}

int		ft_eight_queens_puzzle(void)
{
	int queens[9];
	int count;

	count = 0;
	queens[0] = -1;
	solve_queens_puzzle(1, queens, &count);
	return (count);
}

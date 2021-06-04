/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:39:18 by thduong           #+#    #+#             */
/*   Updated: 2021/05/28 18:20:11 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_comb(int i, int n, int digits[])
{
	int	d;
	int digit_index;

	if (i == n + 1)
	{
		digit_index = 1;
		while (digit_index <= n)
		{
			ft_putchar('0' + digits[digit_index++]);
		}
		if (digits[1] < 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	d = digits[i - 1] + 1;
	while (d < 10)
	{
		digits[i] = d++;
		print_comb(i + 1, n, digits);
	}
}

void	ft_print_combn(int n)
{
	int	digits[11];

	digits[0] = -1;
	print_comb(1, n, digits);
}

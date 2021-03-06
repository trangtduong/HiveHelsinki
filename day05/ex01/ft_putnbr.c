/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:49:16 by thduong           #+#    #+#             */
/*   Updated: 2021/05/31 11:55:32 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	const	int	max_digit_index = 13;
	int			digit_index;
	int			digits[max_digit_index];
	long		long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -long_nb;
	}
	digit_index = 0;
	while (digit_index <= max_digit_index)
	{
		digits[digit_index++] = long_nb % 10;
		long_nb /= 10;
		if (long_nb == 0)
		{
			break ;
		}
	}
	while (digit_index > 0)
	{
		ft_putchar('0' + digits[--digit_index]);
	}
}

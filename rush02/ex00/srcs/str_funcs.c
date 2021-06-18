/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:03:53 by jsaarine          #+#    #+#             */
/*   Updated: 2021/06/13 13:15:42 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int mod;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putnbr(nb / 10);
			ft_putchar('8');
			return ;
		}
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		mod = nb % 10;
		ft_putnbr(nb / 10);
		ft_putchar('0' + mod);
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str = str + 1;
	}
}

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str != '\0')
	{
		str = str + 1;
		l++;
	}
	return (l);
}

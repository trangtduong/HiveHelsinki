/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:09:34 by thduong           #+#    #+#             */
/*   Updated: 2021/06/01 18:17:04 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		base_len(char *base)
{
	int count;
	int i;
	int j;

	count = 0;
	while (base[count] != '\0')
	{
		if (base[count] == '-' || base[count] == '+')
			return (-1);
		count++;
	}
	i = -1;
	while (++i < count - 1)
	{
		j = i;
		while (++j < count)
		{
			if (base[j] == base[i])
				return (-2);
		}
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_n;
	long	lnbr;

	base_n = base_len(base);
	if (base_n < 2)
		return ;
	lnbr = nbr;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr / base_n > 0)
		ft_putnbr_base(lnbr / base_n, base);
	ft_putchar(base[lnbr % base_n]);
}

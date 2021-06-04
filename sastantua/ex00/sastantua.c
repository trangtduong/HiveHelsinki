/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:35:12 by thduong           #+#    #+#             */
/*   Updated: 2021/05/30 02:57:00 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_n(char c, int n)
{
	while (--n >= 0)
	{
		ft_putchar(c);
	}
}

void	putchar_special(int space, int base, int doorsize, int doornob)
{
	ft_putchar_n(' ', space);
	ft_putchar('/');
	ft_putchar_n('*', (base - 2 - doorsize) / 2);
	if (doorsize == 0)
		ft_putchar('*');
	if (doorsize > 0)
	{
		if (doornob == 0)
			ft_putchar_n('|', doorsize);
		else
		{
			ft_putchar_n('|', doorsize - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
	}
	ft_putchar_n('*', (base - 2 - doorsize) / 2);
	ft_putchar('\\');
	ft_putchar('\n');
}

int		base_tier(int tier)
{
	int i;
	int base;

	i = 1;
	base = 7;
	while (++i <= tier)
	{
		base = base + (i / 2 + 1) * 2 + 2 * (i + 2);
	}
	return (base);
}

void	print_tier(int tier, int size)
{
	int base;
	int row;
	int n_space;
	int doorsize;

	doorsize = size;
	if (size % 2 == 0)
		doorsize--;
	base = base_tier(tier);
	row = tier + 2;
	n_space = (base_tier(size) - base_tier(tier)) / 2;
	while (row-- > 0)
	{
		if (tier == size && doorsize >= 5 && row == doorsize / 2)
			putchar_special(n_space + row, base - 2 * row, doorsize, 1);
		else if (tier == size && row < doorsize)
			putchar_special(n_space + row, base - 2 * row, doorsize, 0);
		else
			putchar_special(n_space + row, base - 2 * row, 0, 0);
	}
}

void	sastantua(int size)
{
	int i;

	i = 0;
	while (++i <= size)
	{
		print_tier(i, size);
	}
}

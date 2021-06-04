/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:41:43 by thduong           #+#    #+#             */
/*   Updated: 2021/06/03 20:13:40 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int		digit_value(char c, char *base)
{
	int v;

	v = -1;
	while (++v < base_len(base))
	{
		if (base[v] == c)
			return (v);
	}
	return (-1);
}

int		my_atoi_base(char *str, char *base)
{
	int sign;
	int ret;

	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	if (str[0] == '+')
		str++;
	ret = 0;
	while (*str != '\0')
	{
		if (digit_value(*str, base) < 0)
			return (0);
		ret = base_len(base) * ret + digit_value(*str, base);
		str++;
	}
	return (sign * ret);
}

int		my_int_to_char_alloc(int nbr, char *base)
{
	long	number;
	int		sign;
	int		n_char;

	number = nbr;
	sign = 1;
	n_char = 0;
	if (number < 0)
	{
		n_char++;
		sign = -1;
		number = -number;
	}
	while (number > 0)
	{
		number /= base_len(base);
		n_char++;
	}
	return (n_char);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ret;
	long	number;
	int		i;

	if (base_len(base_from) < 2 || base_len(base_to) < 2)
		return ((char *)0);
	number = my_atoi_base(nbr, base_from);
	i = my_int_to_char_alloc(number, base_to);
	ret = (char *)malloc(sizeof(char) * (i + 1));
	ret[i] = '\0';
	if (number < 0)
	{
		ret[0] = '-';
		number = -number;
	}
	while (--i >= 0 && number > 0)
	{
		ret[i] = base_to[number % base_len(base_to)];
		number /= base_len(base_to);
	}
	return (ret);
}

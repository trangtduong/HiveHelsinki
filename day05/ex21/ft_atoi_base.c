/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:41:21 by thduong           #+#    #+#             */
/*   Updated: 2021/06/01 18:18:13 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len(char *base)
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

int	digit_value(char c, char *base)
{
	int v;

	if (base_len(base) < 2)
		return (-1);
	v = -1;
	while (++v <= base_len(base))
	{
		if (base[v] == c)
			return (v);
	}
	return (-2);
}

int	ft_atoi_base(char *str, char *base)
{
	int sign;
	int ret;

	if (base_len(base) < 2 || str[0] == '\0')
		return (0);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:04:15 by thduong           #+#    #+#             */
/*   Updated: 2021/05/28 13:31:18 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	digit(char c)
{
	int	d;

	if (c < '0' || c > '9')
	{
		return (-1);
	}
	d = c;
	d -= '0';
	return (d);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	ret;

	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	if (str[0] == '+')
	{
		str++;
	}
	ret = 0;
	while (*str != '\0')
	{
		if (digit(*str) == -1)
		{
			break ;
		}
		ret = 10 * ret + digit(*str);
		str++;
	}
	return (sign * ret);
}

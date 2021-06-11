/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:04:15 by thduong           #+#    #+#             */
/*   Updated: 2021/06/07 23:11:25 by thduong          ###   ########.fr       */
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

	if (!str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	ret = 0;
	while (*str != '\0')
	{
		if (digit(*str) == -1)
			break ;
		ret = 10 * ret + digit(*str);
		str++;
	}
	return (sign * ret);
}

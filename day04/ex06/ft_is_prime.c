/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 00:39:16 by thduong           #+#    #+#             */
/*   Updated: 2021/05/29 01:23:05 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int d;

	if (nb < 2)
	{
		return (0);
	}
	d = 2;
	while (d * d <= nb)
	{
		if (nb % d == 0)
		{
			return (0);
		}
		d++;
	}
	return (1);
}
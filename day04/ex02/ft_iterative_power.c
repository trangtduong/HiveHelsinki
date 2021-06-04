/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:42:22 by thduong           #+#    #+#             */
/*   Updated: 2021/05/28 22:55:48 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int pow;

	if (power < 0)
	{
		return (0);
	}
	pow = 1;
	while (power-- >= 1)
	{
		pow = pow * nb;
	}
	return (pow);
}

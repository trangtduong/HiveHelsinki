/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:00:51 by thduong           #+#    #+#             */
/*   Updated: 2021/05/28 23:07:18 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	base;

	if (power < 0)
	{
		return (0);
	}
	base = 1;
	if (power > 0)
	{
		base = nb * ft_recursive_power(nb, power - 1);
	}
	return (base);
}

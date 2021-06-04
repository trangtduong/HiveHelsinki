/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:53:48 by thduong           #+#    #+#             */
/*   Updated: 2021/05/29 01:21:51 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	const	int	max_sq = 46340;
	int			sq;

	if (max_sq * max_sq < nb)
		return (0);
	sq = -1;
	while (++sq <= max_sq)
	{
		if (sq * sq == nb)
		{
			break ;
		}
		if (sq * sq > nb)
		{
			sq = 0;
			break ;
		}
	}
	return (sq);
}

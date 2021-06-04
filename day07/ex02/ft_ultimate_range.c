/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:52:23 by thduong           #+#    #+#             */
/*   Updated: 2021/06/03 13:43:49 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	long	range_size;

	range_size = (long)max - (long)min;
	if (range_size <= 0)
	{
		*range = (int *)0;
		return (0);
	}
	*range = (int *)malloc((range_size) * sizeof(int));
	i = 0;
	while (i < range_size)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (range_size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:20:46 by thduong           #+#    #+#             */
/*   Updated: 2021/06/03 13:31:02 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*ret;
	long	i;
	long	range_size;

	range_size = (long)max - (long)min;
	if (range_size <= 0)
		return ((int *)0);
	ret = (int *)malloc(range_size * sizeof(int));
	i = 0;
	while (i < range_size)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}

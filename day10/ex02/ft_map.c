/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:02:40 by thduong           #+#    #+#             */
/*   Updated: 2021/06/07 21:06:17 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *ret;
	int i;

	if (!tab || length <= 0 || !f)
		return (0);
	ret = (int *)malloc(length * sizeof(*ret));
	if (!ret)
		return (0);
	i = -1;
	while (++i < length)
	{
		ret[i] = f(tab[i]);
	}
	return (ret);
}

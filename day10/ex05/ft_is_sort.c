/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:47:19 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 14:11:27 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int inc;
	int dec;

	if (!tab || length == 0)
		return (1);
	else if (length == 1)
		return (1);
	i = -1;
	inc = 0;
	dec = 0;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			dec++;
		else if (f(tab[i], tab[i + 1] >= 0))
			inc++;
	}
	if (dec == length - 1 || inc == length - 1)
		return (1);
	return (0);
}

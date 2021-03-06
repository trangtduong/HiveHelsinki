/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:43:04 by thduong           #+#    #+#             */
/*   Updated: 2021/06/07 21:43:37 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int c;

	if (!tab)
		return (0);
	c = 0;
	i = -1;
	while (tab[++i] != 0)
	{
		if (f(tab[i]) == 1)
			c++;
	}
	return (c);
}

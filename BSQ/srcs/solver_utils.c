/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 07:55:24 by thduong           #+#    #+#             */
/*   Updated: 2021/06/16 20:31:07 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int				**init_max_search_tab(int width)
{
	int	**tab;
	int	i;

	tab = (int **)malloc(sizeof(int *) * 2);
	if (!tab)
		return (0);
	tab[0] = (int *)malloc(sizeof(int) * width);
	tab[1] = (int *)malloc(sizeof(int) * width);
	if (!tab[0] || !tab[1])
	{
		free(tab[0]);
		free(tab[1]);
		free(tab);
		return (0);
	}
	i = -1;
	while (++i < width)
	{
		tab[0][i] = 0;
		tab[1][i] = 0;
	}
	return (tab);
}

t_max_search	init_max_search(int width)
{
	t_max_search max_search;

	max_search.max_value = 0;
	max_search.max_x = -1;
	max_search.max_y = -1;
	max_search.width = width;
	max_search.tab = init_max_search_tab(width);
	max_search.cur = 0;
	return (max_search);
}

void			free_max_search_tab(t_max_search *max_search)
{
	free(max_search->tab[0]);
	free(max_search->tab[1]);
	free(max_search->tab);
	max_search->tab = 0;
}

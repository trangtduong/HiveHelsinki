/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 06:14:20 by thduong           #+#    #+#             */
/*   Updated: 2021/06/16 20:59:52 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	do_max_search(int i, t_max_search *max_search)
{
	int x;

	x = i % (max_search->width + 1);
	if (x == 0)
		max_search->tab[max_search->cur][0] = 1;
	else
	{
		max_search->tab[max_search->cur][x] =
			1 + MIN_OF_3(max_search->tab[max_search->cur][x - 1],
						max_search->tab[1 - max_search->cur][x - 1],
						max_search->tab[1 - max_search->cur][x]);
	}
	if (max_search->tab[max_search->cur][x] > max_search->max_value)
	{
		max_search->max_value = max_search->tab[max_search->cur][x];
		max_search->max_x = x;
		max_search->max_y = i / (max_search->width + 1);
	}
}

void	fill_map(char *map, t_max_search *max_search, char full)
{
	int x;
	int y;

	x = max_search->max_x;
	while (x > max_search->max_x - max_search->max_value)
	{
		y = max_search->max_y;
		while (y > max_search->max_y - max_search->max_value)
		{
			map[y * (max_search->width + 1) + x] = full;
			y--;
		}
		x--;
	}
}

int		solve(char *map, t_max_search *max_search, t_map_metadata *c)
{
	int i;

	i = -1;
	while (map[++i])
	{
		if (i % (max_search->width + 1) == max_search->width)
		{
			if (map[i] != '\n')
				return (-1);
			max_search->cur = 1 - max_search->cur;
		}
		else if (map[i] == c->empty)
			do_max_search(i, max_search);
		else if (map[i] == c->obstacle)
			max_search->tab[max_search->cur][i % (max_search->width + 1)] = 0;
		else
			return (-1);
	}
	free_max_search_tab(max_search);
	if (max_search->max_value > 0)
		fill_map(map, max_search, c->full);
	return (max_search->max_value);
}

int		read_metadata(char **m, t_map_metadata *meta, int *size)
{
	int i;

	if (*size < 6 || (*m)[0] == '\n' || (*m)[1] == '\n' ||
					(*m)[2] == '\n' || (*m)[3] == '\n')
		return (0);
	meta->height = 0;
	i = 0;
	while ((*m)[i + 3] != '\n')
	{
		if ((*m)[i] < '0' || (*m)[i] > '9')
			return (0);
		meta->height = 10 * meta->height + ((*m)[i] - '0');
		i++;
	}
	meta->empty = (*m)[i];
	meta->obstacle = (*m)[i + 1];
	meta->full = (*m)[i + 2];
	if (meta->empty == meta->obstacle || meta->empty == meta->full ||
			meta->obstacle == meta->full)
		return (0);
	*m = *m + i + 4;
	*size = *size - i - 4;
	return (1);
}

char	*bsq_solver(char *map, int *size)
{
	t_map_metadata	meta;
	t_max_search	max_search;
	int				w;

	if (read_metadata(&map, &meta, size) == 0)
		return (0);
	w = 0;
	while (map[w] != '\n' && map[w] != '\0')
		w++;
	if (meta.height == 0 || w == 0 || *size != meta.height * (w + 1))
		return (0);
	max_search = init_max_search(w);
	if (!max_search->tab)
		return (0);
	if (solve(map, &max_search, &meta) >= 0)
		return (map);
	return (0);
}

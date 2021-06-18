/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:23:02 by jsaarine          #+#    #+#             */
/*   Updated: 2021/06/13 16:59:40 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		is_match(char **input, char **reference)
{
	int i;
	int j;

	i = 0;
	while (reference[i] != 0)
	{
		j = 0;
		while (reference[i][j] != '\0')
		{
			if (reference[i][j] != input[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_dimensions(char **input, int *width, int *height)
{
	int i;

	i = 0;
	*width = ft_strlen(input[0]);
	while (input[i] != 0)
	{
		if (ft_strlen(input[i]) != *width)
			return (0);
		i++;
	}
	*height = i;
	return (1);
}

void	rush00(char **reference, int width, int height,
				char (*rush00_0x)(int x, int y, int width, int height))
{
	int		x;
	int		y;

	if (width <= 0 || height <= 0)
		return ;
	y = 0;
	x = width;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			reference[y][x] = rush00_0x(x, y, width, height);
			x++;
		}
		reference[y][x] = '\0';
		y++;
	}
	reference[y] = 0;
}

void	do_the_loop(char **input, char **reference, int width, int height)
{
	int		i;
	int		first_match;
	char	(*funptra[5])(int, int, int, int);

	funptra[0] = rush00_00;
	funptra[1] = rush00_01;
	funptra[2] = rush00_02;
	funptra[3] = rush00_03;
	funptra[4] = rush00_04;
	first_match = 1;
	i = 0;
	while (i < 5)
	{
		rush00(reference, width, height, funptra[i]);
		if (is_match(input, reference))
		{
			rush0n_printer(i, width, height, first_match);
			if (first_match)
				first_match = 0;
		}
		i++;
	}
	if (first_match)
		ft_putstr("Unknown");
	ft_putstr("\n");
}

void	shape_detector(char **input)
{
	char	**reference;
	int		width;
	int		height;
	int		y;

	if (input)
	{
		if (check_dimensions(input, &width, &height) == 0)
			return ;
		reference = malloc((height + 1) * sizeof(char*));
		y = 0;
		while (y < height)
		{
			reference[y] = malloc((width + 1) * sizeof(char*));
			y++;
		}
		do_the_loop(input, reference, width, height);
		free_array(reference);
	}
}

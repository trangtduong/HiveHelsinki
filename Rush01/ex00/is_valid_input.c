/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:30:04 by thduong           #+#    #+#             */
/*   Updated: 2021/06/05 18:55:52 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	valid_row(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '1' || str[i] > '9') && str[i] != '.')
			return (0);
		i++;
	}
	if (i != 9)
		return (0);
	return (1);
}

int	is_valid_input(int argc, char **argv)
{
	int i;

	if (argc != SIZE + 1)
	{
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		if (valid_row(argv[i]) == 0)
			return (0);
	}
	return (1);
}

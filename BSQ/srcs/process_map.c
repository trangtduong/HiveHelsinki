/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 06:19:41 by thduong           #+#    #+#             */
/*   Updated: 2021/06/16 14:57:46 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	process_map_from_stdin(void)
{
	int		size;
	char	*input;
	char	*return_map;

	size = write_stdin_to_file("srcs/tmp.txt");
	input = read_file("srcs/tmp.txt", size);
	return_map = bsq_solver(input, &size);
	if (!return_map)
		write(2, "map error\n", 10);
	else
		write(1, return_map, size);
	free(input);
}

void	process_map_from_file(char *filemap)
{
	int		size;
	char	*input;
	char	*return_map;

	size = char_count(filemap);
	input = read_file(filemap, size);
	return_map = bsq_solver(input, &size);
	if (!return_map)
		write(2, "map error\n", 10);
	else
		write(1, return_map, size);
	free(input);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 10:01:42 by lonnguye          #+#    #+#             */
/*   Updated: 2021/06/16 07:33:06 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		process_map_from_stdin();
	else
	{
		i = 0;
		while (++i < argc)
		{
			process_map_from_file(argv[i]);
			if (i < argc - 1)
				write(1, "\n", 1);
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 06:24:40 by thduong           #+#    #+#             */
/*   Updated: 2021/06/10 15:08:12 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		display_from_stdin();
	else
	{
		i = 0;
		while (++i < argc)
			display_from_file(argv[i]);
	}
	return (0);
}

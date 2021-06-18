/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:45:42 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 16:45:52 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(void)
{
	t_list	*input;
	char	**array;

	input = read_input_to_linkedlist();
	if (input == 0)
	{
		write(2, "Nothing\n", 8);
		return (0);
	}
	array = read_lines(input);
	shape_detector(array);
	free_linkedlist(&input);
	free_array(array);
	return (0);
}

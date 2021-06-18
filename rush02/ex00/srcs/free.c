/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:24:44 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 16:22:30 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_array(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array[i]);
	free(array);
}

void	free_linkedlist(t_list **begin)
{
	t_list *next;
	t_list *head;

	head = *begin;
	while (head)
	{
		next = head->next;
		head->next = 0;
		free(head->str);
		free(head);
		head = next;
	}
	*begin = 0;
}

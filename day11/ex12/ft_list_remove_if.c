/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:57:04 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 13:15:21 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*head;
	t_list	*prev;
	t_list	*temp;

	if (!begin_list)
		return ;
	head = *begin_list;
	while (head)
	{
		if ((*cmp)(head->data, data_ref) == 0)
		{
			if (head == *begin_list)
				*begin_list = head->next;
			else
				prev->next = head->next;
			temp = head;
			head = head->next;
			free(temp);
		}
		else
		{
			prev = head;
			head = head->next;
		}
	}
}

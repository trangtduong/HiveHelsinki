/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:44:10 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 18:53:55 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new_elem;
	t_list	*head;
	int		insert;

	new_elem = ft_create_elem(data);
	head = *begin_list;
	if (!head || (*cmp)(new_elem->data, head->data) < 0)
	{
		new_elem->next = head;
		*begin_list = new_elem;
		return ;
	}
	insert = 0;
	while (head->next)
	{
		if ((*cmp)(data, head->data) > 0 && (*cmp)(data, head->next->data) < 0)
		{
			new_elem->next = head->next;
			head->next = new_elem;
			insert = 1;
		}
		head = head->next;
	}
	if (insert == 0)
		head->next = new_elem;
}

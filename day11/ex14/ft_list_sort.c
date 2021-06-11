/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:36:21 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 18:07:58 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_ptr(void **a, void **b)
{
	void *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *i;
	t_list *j;

	if (!*begin_list)
		return ;
	i = *begin_list;
	while (i->next)
	{
		j = *begin_list;
		while (j->next)
		{
			if ((*cmp)(j->data, j->next->data) > 0)
				ft_swap_ptr(&(j->data), &(j->next->data));
			j = j->next;
		}
		i = i->next;
	}
}

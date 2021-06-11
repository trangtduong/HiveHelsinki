/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:07:07 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 19:03:26 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_merge(t_list *x, t_list *y, int (*cmp)())
{
	t_list	*result;

	if (!x)
		return (y);
	else if (!y)
		return (x);
	if ((*cmp)(x->data, y->data) < 0)
	{
		result = x;
		result->next = ft_merge(x->next, y, (*cmp));
	}
	else
	{
		result = y;
		result->next = ft_merge(x, y->next, (*cmp));
	}
	return (result);
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
							int (*cmp)())
{
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	else if (!begin_list2)
		return ;
	*begin_list1 = ft_merge(*begin_list1, begin_list2, (*cmp));
}

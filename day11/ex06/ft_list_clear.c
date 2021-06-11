/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 07:15:10 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 07:32:25 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		elem = *begin_list;
		*begin_list = (*begin_list)->next;
		free(elem);
	}
	*begin_list = NULL;
}

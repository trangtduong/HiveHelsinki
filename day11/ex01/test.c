/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:17:45 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 15:56:19 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list *list;

	ft_list_push_back(&list, "first");
	print_list(list);
	ft_list_push_back(&list, "second");
	print_list(list);
	ft_list_push_back(&list, "third");
	print_list(list);
}

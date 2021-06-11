/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:59:44 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 19:07:28 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list	*list;
	char	*data;

	data = "hello";
	list = ft_create_elem(data);
	if (list->next == NULL)
		printf("NULL\n");
	printf("%s\n", (char *)list->data);
}

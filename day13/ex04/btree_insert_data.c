/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 07:36:36 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 19:24:51 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (!root || !*root || !item)
	{
		if (root && item)
			*root = btree_create_node(item);
		return ;
	}
	if ((*cmpf)(item, (*root)->item) >= 0)
		btree_insert_data(&(*root)->right, item, (*cmpf));
	else
		btree_insert_data(&(*root)->left, item, (*cmpf));
}

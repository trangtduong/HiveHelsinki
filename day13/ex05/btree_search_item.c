/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:19:46 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 10:32:03 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
						int (*cmpf)(void *, void *))
{
	void *found;

	found = NULL;
	if (root)
	{
		found = btree_search_item(root->left, data_ref, cmpf);
		if (!found && cmpf(data_ref, root->item) == 0)
			found = root->item;
		if (!found)
			found = btree_search_item(root->right, data_ref, cmpf);
	}
	return (found);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:34:12 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 10:42:35 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	btree_level_count(t_btree *root)
{
	if (root)
	{
		return (1 + max(btree_level_count(root->left),
						btree_level_count(root->right)));
	}
	return (0);
}

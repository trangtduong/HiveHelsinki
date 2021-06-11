#include "ft_btree_extra.h"

void	free_btree(t_btree *node)
{
	if (node == NULL)
	{
		return ;
	}
	free_btree(node->left);
	free_btree(node->right);
	free(node);
}

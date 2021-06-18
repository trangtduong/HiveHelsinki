#include "ft_btree_extra.h"
#include <stdio.h>

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_infix(root->left, (*applyf));
		(*applyf)(root->item);
		btree_apply_infix(root->right, (*applyf));
	}
}

int		main(void)
{
	t_btree	*root;
	void *found;

	root = sample_tree();
	found = btree_search_item(root, (void *)"4",&cmp);
	printf("%s\n", (char *)found);
	free_btree(root);
}

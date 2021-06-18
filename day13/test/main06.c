#include "ft_btree_extra.h"
#include <stdio.h>

int	btree_level_count(t_btree *root);

int	main(void)
{
	t_btree *root;

	root = sample_tree();
	// root = NULL;
	// root = btree_create_node("5");
	// root->left = btree_create_node("3");
	// root->right = btree_create_node("7");
	// root->left->left = btree_create_node("1");
	// root->left->right = btree_create_node("4");
	// root->right->left = btree_create_node("6");
	// root->right->right = btree_create_node("9");
	printf("%d\n", btree_level_count(root));
	return (0);
}
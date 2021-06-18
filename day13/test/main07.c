#include "ft_btree_extra.h"
#include <stdio.h>

void	btree_apply_by_level(t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first_elem));

void print_node(void *item, int current_level, int is_first_elem)
{
	printf("item: *%s*", (char *)item);
	printf(" level: %d ", current_level);
	printf(" is first: %d\n", is_first_elem);
}

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
	btree_apply_by_level(root, &print_node);
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - lista
 * @tree: ptr
 * @func: ptr
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t alt_left, alt_right;

	if (tree == NULL)
	{
		return(0);
	}

	binary_tree_height(tree->left);
	binary_tree_height(tree->right);

	for (alt_left = 0; )
	{
	}
}

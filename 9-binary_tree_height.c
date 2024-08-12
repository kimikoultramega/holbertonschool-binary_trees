#include "binary_trees.h"

/**
 * binary_tree_height - lista
 * @tree: ptr
 * Return: altura
 */
size_t binary_tree_height(const binary_tree_t *tree)	
{	
	size_t alt_left = 0;
	size_t alt_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	alt_left = binary_tree_height(tree->left);
	alt_right = binary_tree_height(tree->right);

	return (alt_left > alt_right ? alt_left : alt_right);
}

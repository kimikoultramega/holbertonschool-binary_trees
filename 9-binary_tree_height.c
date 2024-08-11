#include "binary_trees.h"

/**
 * binary_tree_height - lista
 * @tree: ptr
 * Return: altura
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t alt_left, alt_right;

	if (tree == NULL)
	{
		return (0);
	}

	alt_left = binary_tree_height(tree->left);
	alt_right = binary_tree_height(tree->right);

	if (alt_left > alt_right)
	{
		return (alt_left + 1);
	}
	else
	{
		return (alt_right + 1);
	}
}

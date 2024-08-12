#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s_left, s_right, s_total;

	if (tree == NULL)
	{
		return (0);
	}

	s_left = binary_tree_size(tree->left);
	s_right = binary_tree_size(tree->right);
	s_total = s_left + s_right;

	return (s_total + 1);

}

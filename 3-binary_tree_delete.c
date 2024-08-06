#include "binary_trees.h"

/**
 * binary_tree_delete - eleminiar el tree compelto
 * @tree: puntero
 * Return: Always 0 (Success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}


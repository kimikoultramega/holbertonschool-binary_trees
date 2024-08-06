#include "binary_trees.h"

/**
 * binary_tree_insert_left - insartar a la izquierda un nuevo nodo
 * @parent: nodo parent
 * @value: value
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *aux = parent->left;
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
	}

	if (parent->left != NULL)
	{
		parent->left = new_node;
		parent->right = NULL;
		new_node->left = aux;
	}
	return (new_node);
}

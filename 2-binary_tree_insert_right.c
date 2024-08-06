#include "binary_trees.h"

/**
 * binary_tree_insert_right - insertar un nuevo nodo a la derecha
 * @parent: nodo parent
 * @value: value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *aux;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		aux = parent->right;
		parent->right = new_node;
		aux->parent = new_node;
		new_node->right = aux;
	}
	parent->right = new_node;

	return (new_node);
}

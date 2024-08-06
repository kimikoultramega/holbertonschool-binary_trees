#include "binary_trees.h"

/**
 * binary_tree_insert_left - insartar a la izquierda un nuevo nodo
 * @parent: nodo parent
 * @value: value
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		aux = parent->left;
		parent->left = new_node;
		aux->parent = new_node;
		new_node->left = aux;
	}
	parent->left = new_node;

	return (new_node);
}

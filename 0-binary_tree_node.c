#include "binary_tree.h"

/**
 * binary_tree_node - creates a binary tree mode
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on future
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

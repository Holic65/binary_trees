#include "binary_trees.h"
/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: a pointer to the parent of created node
 * @value: value to put in created node
 *
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!value)
		return (NULL);

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

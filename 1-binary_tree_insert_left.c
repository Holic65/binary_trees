#include "binary_trees.h"
/*
 * binary_tree_insert_left - A function that node to left of parent
 * @parent: The parent node
 * @value: The value of the node
 *
 * Return: pointer to created node or NULL if failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
		parent->left->parent = NULL;

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	parent->left = new_node;

	return (new_node);
}

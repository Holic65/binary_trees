#include "binary_trees.h"
/**
 * normal_depth - a function that finds the depth of a node in a tree
 * @tree: this is the pointer to the node depth is needed
 *
 * Return: depth of a tree otherwise NULL
 */

size_t normal_depth(const binary_tree_t *tree)
{
	size_t node_depth;

	if (tree == NULL)
		return (0);

	node_depth = normal_depth(tree->parent);

	return (node_depth + 1);
}

/**
 * binary_tree_depth - a function that finds depth of node minus one
 * @tree: pointer to the node that depth is needed
 *
 * Return: node depth otherwise NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (normal_depth(tree) - 1);
}

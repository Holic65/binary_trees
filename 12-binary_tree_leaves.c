#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts leaves on a tree
 * @tree: the tree to be checked
 *
 * Return: number of leaves in a tree or NULL if otherwise
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (leaves + 1);

	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

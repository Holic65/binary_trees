#include "binary_trees.h"
/**
 * binary_tree_preorder - a function that uses preoreder traversal on tree
 * @tree: pointer to root node
 * @func: pointer to a func to call each node value
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

#include "binary_trees.h"
/**
 * binary_tree_order - a function that performs inorder traversal on a tree
 * @tree: root node of the tree
 * @func: function to print value of node
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

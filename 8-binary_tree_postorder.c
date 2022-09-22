#inclued "binary_trees.h"
/**
 * binary_tree_postorder - a function that uses postorder traversal on a tree
 * @tree: root node
 * @func: a function to read value of node
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

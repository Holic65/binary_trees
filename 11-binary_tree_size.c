#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures size of a tree
 * @tree: pointer to the root node of the tree
 *
 * Return: returns size of the tree or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);


	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

	return (left_height + right_height + 1);
}

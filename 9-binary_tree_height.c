#include "binary_trees.h"
/**
 * normal_height - a function that measures height of a tree
 * @tree: pointer to the root node of the tree
 *
 * Return: returns size of the tree or 0
 */

size_t normal_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);


	left_height = normal_height(tree->left);
	right_height = normal_height(tree->right);

	if (left_height >= right_height)
		return ((left_height) + 1);
	else
		return ((right_height) + 1);
}
/**
 * binary_tree_height - measures height of tree minus 1
 * @tree: a pointer to the tree that is to be measured
 *
 * Return: height of tree otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (normal_height(tree) - 1);
}

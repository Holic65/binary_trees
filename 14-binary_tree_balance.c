#include "binary_trees.h"

/**
 * tree_height - Computes the height of a binary tree
 * @tree: The binary tree
 * @n: The accumulated height of the current tree
 * @height: A pointer to the tree height
 */
void tree_height(const binary_tree_t *tree, int n, int *height)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
	{
		if (n > *height)
			*height = n;
	}

	tree_height(tree->left, n + 1, height);
	tree_height(tree->right, n + 1, height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: the balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	tree_height(tree->left, 1, &lh);
	tree_height(tree->right, 1, &rh);

	return (lh - rh);
}

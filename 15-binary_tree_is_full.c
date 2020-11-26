#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Binary tree
 * Return: 1 if is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int sleft, sright;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);

		sleft = binary_tree_is_full(tree->left);
		sright = binary_tree_is_full(tree->right);

		return ((sleft == 0 || sright == 0) ? 0 : 1);
	}
	return (0);
}

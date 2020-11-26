#include "binary_trees.h"
/**
 * M_height - Mearure the height of a binary tree
 * @tree: Binary tree
 * Return: Binary tree height
 */
size_t M_height(const binary_tree_t *tree)
{
	size_t cLeft = 0, cRight = 0;

	if (tree)
	{
		cLeft = tree->left ? 1 + M_height(tree->left) : 1;
		cRight = tree->right ? 1 + M_height(tree->right) : 1;
		return ((cLeft > cRight) ? cLeft : cRight);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Binary tree
 * Return: Tree balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (M_height(tree->left) - M_height(tree->right));

	return (0);
}

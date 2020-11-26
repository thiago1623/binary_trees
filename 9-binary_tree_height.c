#include "binary_trees.h"
/**
 * binary_tree_height - Mearure the height of a binary tree
 * @tree: Binary tree
 * Return: Binary tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t s_left = 0, s_right = 0;

	if (tree)
	{
		s_left = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
		s_right = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;
		return ((s_left > s_right) ? s_left : s_right);
	}
	return (0);
}

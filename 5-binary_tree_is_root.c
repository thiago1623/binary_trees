#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if node is a leaf in binary tree
 * @node: Node to check.
 * Return: 1 if is leaf, 0 if is not a leaf
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}

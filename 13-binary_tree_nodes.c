#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: Binary tree
 * Return: Node's sum
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_node = 0;

	if (tree)
	{
		count_node += (tree->left || tree->right) ? 1 : 0;
		count_node += binary_tree_nodes(tree->left);
		count_node += binary_tree_nodes(tree->right);
	}
	return (count_node);
}

#include "binary_trees.h"
/**
 * binary_tree_delete - functions that delete a new node
 * @tree: pointer
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

#include "binary_trees.h"

/**
 * binary_tree_depth - measures the low of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *curr = tree;
	size_t dp = 0;

	if (!tree)
		return (0);

	while (curr->parent)
	{
		dp++;
		curr = curr->parent;
	}
	return (dp);
}

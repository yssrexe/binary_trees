#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_tree = binary_tree_is_full(tree->left);
	right_tree = binary_tree_is_full(tree->right);
	if (tree->left && tree->right)
		return (left_tree * right_tree);

	return (0);
}

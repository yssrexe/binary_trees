#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count
 * Return: 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_tree = binary_tree_leaves(tree->left);
	right_tree = binary_tree_leaves(tree->right);

	return (left_tree + right_tree);
}

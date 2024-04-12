#include "binary_trees.h"
/**
 * binary_tree_nodes -  function that counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return: 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_tree, right_tree, i = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		i = 1;

	left_tree = binary_tree_nodes(tree->left);
	right_tree = binary_tree_nodes(tree->right);

	return (left_tree + right_tree + i);
}

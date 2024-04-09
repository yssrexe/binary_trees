#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * @tree: pointer to the root node of the tree
 * @func:  pointer to a function to call for each node
 * Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

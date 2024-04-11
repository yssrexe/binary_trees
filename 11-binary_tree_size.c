#include "binary_trees.h"

/**
 * binary_tree_size - measures the low of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_tree, right_tree;

    if (!tree)
        return (0);

    left_tree = binary_tree_size(tree->left);
    right_tree = binary_tree_size(tree->right);

    return (left_tree + right_tree + 1);
}

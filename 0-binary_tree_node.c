#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointe to the binary tree new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node != NULL)
	{
		node->right = NULL;
		node->left = NULL;
		node->parent = parent;
		node->n = value;
	}
	return (node);
}

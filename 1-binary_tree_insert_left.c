#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node, *tmp;

    if (!parent)
        return NULL;

    node = binary_tree_node(parent, value);

    if (!node)
        return NULL;

    if (parent->left)
    {
        tmp = parent->left;
        tmp->parent = node;
        node->left = tmp;
    }
    parent->left = node;

    return (node);    
}
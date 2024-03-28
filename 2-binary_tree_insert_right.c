#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: a parent node
 * @value: the value of the node
 * Return: a pointer to the created node or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
    {
        return (NULL);
    }

    new_node = binary_tree_node(parent, value);

    if (new_node == NULL)
    {
        return (NULL);
    }

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}

#include "binary_trees.h"

/**
 * binary_tree_is_root: checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
   /* If the node is NULL, return 0 (not a leaf) */
    if (node == NULL)
     {
        return (0);
    }

    /*Check if both left and right child pointers are not NULL.
     If so, the node is a root */
    return (!(node->left == NULL && node->right == NULL));
}
#include "binary_trees.h"

/**
 * binary_tree_inorder: goes through a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Returns: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL) {
        return;
    }

    /* Recursively traverse the left subtree */
    binary_tree_inorder(tree->left, func);

    /* Visits the root node (pre-order) */
    func(tree->n);

    /* Recursively traverse the right subtree */
    binary_tree_inorder(tree->right, func);

}
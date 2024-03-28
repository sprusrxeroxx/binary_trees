#include "binary_trees.h"

/**
 * binary_tree_postorder: goes through a binary tree using postorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Returns: nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL) {
        return;
    }

    /* Recursively traverse the left subtree */
    binary_tree_postorder(tree->left, func);

    /* Recursively traverse the right subtree */
    binary_tree_postorder(tree->right, func);

    /* Visits the root node (inorder) */
    func(tree->n);
}
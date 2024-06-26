#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree:  a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Returns: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)) {
    if (tree == NULL || func == NULL) {
        return;
    }

    /* Visits the root node (pre-order) */
    func(tree->n);

    /* Recursively traverse the left subtree */
    binary_tree_preorder(tree->left, func);

    /* Recursively traverse the right subtree */
    binary_tree_preorder(tree->right, func);
}
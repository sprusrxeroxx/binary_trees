#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the Adam node of tree to delete
 * Return: nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL) {
        return;
    }

    /* Recursively delete the left and right subtrees */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    /* Free the memory of the current node */
    free(tree);

}
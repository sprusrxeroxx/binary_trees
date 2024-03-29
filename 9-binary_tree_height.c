#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: root of the tree 
 * Return: 0 or size of tree
 * 
*/

size_t binary_tree_height(const binary_tree_t *tree) 
{
    size_t right_height = 0, left_height = 0;

   if (tree == NULL) 
   {
       return 0;
   }
   else
   {
    if (tree)
    {
        /* Recursively calculate the heights of the left and right subtrees */
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);
    }
   /* Return the height of the taller subtree + 1 (for the current node) */
    return (1 + (left_height > right_height ? left_height : right_height));
   }

}
#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance of a tree (i.e, tree->left - tree->right)
* @tree: pointer to the root node of the tree
* Return: balance factor, 0 if NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
    int hl, hr, balance;

    if (tree == NULL)
        return (0);
    
    hl = binary_tree_height(tree->left);
    hr = binary_tree_height(tree->right);

    balance = hl - hr;
    return (balance);
}

#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if  node is a leaf
 * @node: A pointer to the node to check.
 * Return: If the node is a leaf return 1 or return 0 if is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

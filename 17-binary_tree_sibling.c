#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree
 * @node: A pointer to the node to find the sibling for
 *
 * Return: A pointer to the sibling node, or NULL if node is NULL,
 * the parent is NULL, or the node has no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}

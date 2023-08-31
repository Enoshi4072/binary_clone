#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one
 * child in a binary tree
 * @tree: A pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least one child in the binary tree.
 * If tree is NULL, return 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_with_1;

	node_with_1 = 0;
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		node_with_1 += 1;
	}
	else
	{
		node_with_1 += 0;
	}
	node_with_1 += binary_tree_nodes(tree->left);
	node_with_1 += binary_tree_nodes(tree->right);
	return (node_with_1);
}

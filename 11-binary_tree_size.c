#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of the binary tree. If tree is NULL, return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num;

	num = 0;
	if (tree == NULL)
		return (0);
	num += binary_tree_size(tree->left);
	num += 1;
	num += binary_tree_size(tree->right);
	return (num);
}

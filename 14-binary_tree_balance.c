#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
	return (0);
if (tree->left)
	left_height = 1 + binary_tree_height(tree->left);
else
	left_height = 1;
if (tree->right)
	right_height = 1 + binary_tree_height(tree->right);
else
	right_height = 1;
return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the
 * tree to measure the balance factor
 *
 * Return: The balance factor of the binary tree. If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, balance_factor;

	left_height = 0;
	right_height = 0;
	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	balance_factor = left_height - right_height;
	return (balance_factor);
}

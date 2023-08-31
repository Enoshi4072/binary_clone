#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary tree. If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

if (tree == NULL)
	return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_check_parents - Checks if a binary tree satisfies
 * the parent condition
 * @tree: A pointer to the root node of the binary tree to check
 *
 * Return: 1 if the binary tree satisfies the condition, 0 otherwise.
 * If tree is NULL, returns 1 (to handle an empty tree).
 */

int binary_tree_check_parents(const binary_tree_t *tree)
{
if (tree == NULL)
	return (1);
if (tree->left == NULL && tree->right == NULL)
	return (1);

if (tree->left != NULL && tree->right != NULL)
	return (binary_tree_check_parents(tree->left) && binary_tree_check_parents(tree->right));
return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect,
 * 0 otherwise. If tree is NULL, return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
if (tree == NULL)
	return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height != right_height)
	return (0);
return (binary_tree_check_parents(tree));
}

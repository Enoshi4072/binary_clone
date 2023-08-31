#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * The value in each node is passed as a parameter to the given function.
 * If tree or func is NULL, the function does nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
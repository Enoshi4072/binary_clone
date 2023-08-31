#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: A pointer to the parent node of the new node
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node or NULL on Failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Declarations */
	binary_tree_t *newnode;
	/* Allocate memory */
	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	/* Check if memory has been allocated */
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}

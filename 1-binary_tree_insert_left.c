#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Declarations */
	binary_tree_t *newnode;
	/* Check if the parent is null */
	if (parent == NULL)
		return (NULL);
	/* Memory allocations */
	newnode = binary_tree_node(parent, value);
	/* Check if the memory has been assigned */
	if (newnode == NULL)
		return (NULL);
	/* Assignements */
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}

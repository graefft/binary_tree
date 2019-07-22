#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Head of binary tree
 * @value: Value of binary tree node
 * Return: New binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent && parent->left == NULL)
	{
		parent->left = new_node;
	}
	else if (parent)
	{
		parent->right = new_node;
	}

	return (new_node);
}

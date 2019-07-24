#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of another node
 * @parent: pointer to node to insert in
 * @value: value to store in new node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}

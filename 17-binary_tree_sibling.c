#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to node to find sibling
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);

	if (node->parent->right && node->parent->right != node)
		return (node->parent->right);

	return (NULL);
}

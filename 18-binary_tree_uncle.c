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

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (node ? binary_tree_sibling(node->parent) : NULL);
}

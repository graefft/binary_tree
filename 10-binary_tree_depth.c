#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t child;

	if (tree == NULL)
		return (0);

	child = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (child);
}

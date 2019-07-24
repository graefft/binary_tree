#include "binary_trees.h"

/**
 * depth - gives the depth of the node
 * @node: node of a binary tree
 * Return: depth of @node
 */
int depth(const binary_tree_t *node)
{
	int c = -1;

	while (node)
	{
		c++;
		node = node->parent;
	}
	return (c);
}


/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp = NULL;
	int d1, d2, diff;

	d1 = depth(first), d2 = depth(second);
	diff = d1 - d2;

	if (!first || !second)
		return (NULL);
	if (diff < 0)
	{
		temp = first;
		first = second;
		second = temp;
		diff = -diff;
	}

	while (diff--)
		first = first->parent;

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

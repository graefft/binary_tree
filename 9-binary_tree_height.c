#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: binary tree
 * Return: height of the @tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		l_height = 1 + binary_tree_height(tree->left);
	}
	else
	{
		l_height = 0;
	}

	if (tree->right)
		r_height = 1 + binary_tree_height(tree->right);
	else
	{
		r_height = 0;
	}

	if (l_height > r_height)
		return (l_height);
	return (r_height);
}

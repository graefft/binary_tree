#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: binary tree
 * Return: the size of @tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}

/**
 * is_complete - recursive function for b_t_i_c
 * @tree: pointer to root node
 * @i: current index
 * @count: size of tree
 * Return: 1 if complete, otherwise 0
*/
int is_complete(const binary_tree_t *tree, size_t i, size_t count)
{
	if (tree == NULL)
		return (1);

	if (i >= count)
		return (0);

	return (is_complete(tree->left, 2 * i + 1, count) &&
		is_complete(tree->right, 2 * i + 2, count));
}


/**
 * binary_tree_is_complete - function to check if binary tree is complete
 * @tree: pointer to root node of tree to check
 * Return: 1 if complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t count, index = 0;
	int complete = 0;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree);

	complete = is_complete(tree, index, count);
	return (complete);
}
